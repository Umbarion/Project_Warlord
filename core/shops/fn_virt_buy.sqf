#include "..\..\script_macros.hpp"
/*
    File: fn_virt_buy.sqf
    Author: Bryan "Tonic" Boardwine
	Editor: Paini
    Description: wtf oO
    Buy a virtual item from the store.
*/
private ["_type","_price","_amount","_hideout","_itemInfo","_gangown"];
if ((lbCurSel 2401) isEqualTo -1) exitWith {hint localize "STR_Shop_Virt_Nothing"};
_type = lbData[2401,(lbCurSel 2401)];
_price = lbValue[2401,(lbCurSel 2401)];
_amount = ctrlText 2404;
if (!([_amount] call TON_fnc_isnumber)) exitWith {hint localize "STR_Shop_Virt_NoNum";};
_amount = parseNumber(_amount);

_hideout = nearestObject[getPosATL player,"FlagPole_F"];
_gangown =_hideout getVariable "gangOwner";
if ((_price * _amount) > CASH && {!isNil "_hideout" && {!isNil {group player getVariable "gang_bank"}} && {(group player getVariable "gang_bank") <= _price * _amount}}) exitWith {hint localize "STR_NOTF_NotEnoughMoney"};
if ((time - life_action_delay) < 0.2) exitWith {hint localize "STR_NOTF_ActionDelay";};
life_action_delay = time;
_itemInfo = [_type] call life_fnc_fetchCfgDetails;

if ((player canAdd [_type, _amount])) then {
    if (!isNil "_gangown" && {!isNil {group player getVariable "gang_bank"}} && {(group player getVariable "gang_bank") >= _price}) then {
        _action = [
            format [(localize "STR_Shop_Virt_Gang_FundsMSG")+ "<br/><br/>" +(localize "STR_Shop_Virt_Gang_Funds")+ " <t color='#8cff9b'>$%1</t><br/>" +(localize "STR_Shop_Virt_YourFunds")+ " <t color='#8cff9b'>$%2</t>",
                [(group player getVariable "gang_bank")] call life_fnc_numberText,
                [CASH] call life_fnc_numberText
            ],
            localize "STR_Shop_Virt_YourorGang",
            localize "STR_Shop_Virt_UI_GangFunds",
            localize "STR_Shop_Virt_UI_YourCash"
        ] call BIS_fnc_guiMessage;
        if (_action) then {
            hint format [localize "STR_Shop_Virt_BoughtGang",_amount,_itemInfo select 1,[(_price * _amount)] call life_fnc_numberText];
			[true,_type,_amount] call life_fnc_handleInv;
            _funds = group player getVariable "gang_bank";
            _funds = _funds - (_price * _amount);
            group player setVariable ["gang_bank",_funds,true];

            if (life_HC_isActive) then {
                [1,group player] remoteExecCall ["HC_fnc_updateGang",HC_Life];
            } else {
                [1,group player] remoteExecCall ["TON_fnc_updateGang",RSERV];
            };

        } else {
            if ((_price * _amount) > CASH) exitWith {hint localize "STR_NOTF_NotEnoughMoney";};
            hint format [localize "STR_Shop_Virt_BoughtItem",_amount,_itemInfo select 1,[(_price * _amount)] call life_fnc_numberText];
            [true,_type,_amount] call life_fnc_handleInv;
			CASH = CASH - _price * _amount;
        };
    } else {
        if ((_price * _amount) > CASH) exitWith {hint localize "STR_NOTF_NotEnoughMoney";};
        hint format [localize "STR_Shop_Virt_BoughtItem",_amount,_itemInfo select 1,[(_price * _amount)] call life_fnc_numberText];
		[true,_type,_amount] call life_fnc_handleInv;
        CASH = CASH - _price * _amount;
    };
    [] call life_fnc_virt_update;
}else{
	hint localize "STR_NOTF_NoSpace";
};

[0] call SOCK_fnc_updatePartial;
[3] call SOCK_fnc_updatePartial;
