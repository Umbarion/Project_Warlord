#include "..\..\script_macros.hpp"
/*
    File: fn_virt_update.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Update and fill the virtual shop menu.
*/
private ["_item_list","_gear_list","_shopItems","_name","_price","_itemx","_itemInfo","_gearInfo"];
disableSerialization;

//Setup control vars.
_item_list = CONTROL(2400,2401);
_gear_list = CONTROL(2400,2402);

//Purge list
lbClear _item_list;
lbClear _gear_list;

if (!isClass(missionConfigFile >> "VirtualShops" >> life_shop_type)) exitWith {closeDialog 0; hint localize "STR_NOTF_ConfigDoesNotExist";}; //Make sure the entry exists..
ctrlSetText[2403,localize (M_CONFIG(getText,"VirtualShops",life_shop_type,"name"))];
_shopItems = M_CONFIG(getArray,"VirtualShops",life_shop_type,"items");

{
    _price = M_CONFIG(getNumber,"VirtualItems",_x,"buyPrice");
    if (!(_price isEqualTo -1)) then {
		_itemInfo = [_x] call life_fnc_fetchCfgDetails;
        _item_list lbAdd format ["%1  ($%2)","%1",_itemInfo select 1,[_price] call life_fnc_numberText];
        _item_list lbSetData [(lbSize _item_list)-1,_x];
        _item_list lbSetValue [(lbSize _item_list)-1,_price];
		_item_list lbSetPicture [(lbSize _item_list)-1,_itemInfo select 2];
    };
} forEach _shopItems;

{
    
    _itemx=_x;
    _val = ({_x == _itemx} count magazines player);

    if (_val > 0) then {
		_gearInfo = [_x] call life_fnc_fetchCfgDetails;
        _gear_list lbAdd format ["%2 [x%1]",_val,_gearInfo select 1];
        _gear_list lbSetData [(lbSize _gear_list)-1,_x];
        _gear_list lbSetPicture [(lbSize _gear_list)-1,_gearInfo select 2];
    };
} forEach _shopItems;
