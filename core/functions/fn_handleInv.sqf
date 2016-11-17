#include "..\..\script_macros.hpp"
/*
    File: fn_handleInv.sqf
    Author: Bryan "Tonic" Boardwine
	Editor: Paini

    Description:
    Do I really need one?
*/
private ["_math","_item","_num","_return","_var","_weight","_value","_diff"];
_math = [_this,0,false,[false]] call BIS_fnc_param; //true = add; false = SUB;
_item = [_this,1,"",[""]] call BIS_fnc_param; //The item we are using to add or remove.
_num = [_this,2,0,[0]] call BIS_fnc_param; //Number of items to add or remove.
if (_item isEqualTo "" || _num isEqualTo 0) exitWith {false};

//_var = ITEM_VARNAME(_item);


if (_math) then {
    //Lets add!
    if ((player canAdd [_item, _num])) then {
        player addMagazines [_item, _num];
		_return=true;
    } else {_return = false;};
} else {
    //Lets SUB!
    for "_i" from 1 to _num do {
		 player removeMagazine _item;
	};
	_return=true
};

_return;
