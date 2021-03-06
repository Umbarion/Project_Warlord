#include "..\..\script_macros.hpp"
/*
    File: fn_virt_sell.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Sell a virtual item to the store / shop
*/
private ["_type","_index","_price","_amount","_itemInfo","_val"];
if ((lbCurSel 2402) isEqualTo -1) exitWith {};
_type = lbData[2402,(lbCurSel 2402)];
_price = M_CONFIG(getNumber,"VirtualItems",_type,"sellPrice");
_ext=false;
if (_price isEqualTo -1) exitWith {};

_amount = ctrlText 2405;
if (!([_amount] call TON_fnc_isnumber)) exitWith {hint localize "STR_Shop_Virt_NoNum";};
_amount = parseNumber (_amount);
if(isClass (configFile >> "CfgMagazines" >> _type))then {		
	_val=({_x == _type} count magazines player)
}else{
	_val=({_x == _type} count backpackItems player);
	_val=_val+({_x == _type} count vestItems player);
	_val=_val+({_x == _type} count uniformItems player);	
};
if(_amount>_val)exitWith {hint localize "STR_Shop_Virt_NotEnough"};
if ((time - life_action_delay) < 0.2) exitWith {hint localize "STR_NOTF_ActionDelay";};
life_action_delay = time;

_price = (_price * _amount);
_itemInfo = [_type] call life_fnc_fetchCfgDetails;

if ([false,_type,_amount] call life_fnc_handleInv) then {	
    hint format [localize "STR_Shop_Virt_SellItem",_amount,_itemInfo select 1,[_price] call life_fnc_numberText];
    CASH = CASH + _price;
    [0] call SOCK_fnc_updatePartial;
    [] call life_fnc_virt_update;
};

if (life_shop_type isEqualTo "drugdealer") then {
    private ["_array","_ind","_val"];
    _array = life_shop_npc getVariable ["sellers",[]];
    _ind = [getPlayerUID player,_array] call TON_fnc_index;
    if (!(_ind isEqualTo -1)) then {
        _val = ((_array select _ind) select 2);
        _val = _val + _price;
        _array set[_ind,[getPlayerUID player,profileName,_val]];
        life_shop_npc setVariable ["sellers",_array,true];
    } else {
        _array pushBack [getPlayerUID player,profileName,_price];
        life_shop_npc setVariable ["sellers",_array,true];
    };
};

if (life_shop_type isEqualTo "gold" && (LIFE_SETTINGS(getNumber,"noatm_timer")) > 0) then {
    [] spawn {
        life_use_atm = false;
        sleep ((LIFE_SETTINGS(getNumber,"noatm_timer")) * 60);
        life_use_atm = true;
    };
};

[3] call SOCK_fnc_updatePartial;