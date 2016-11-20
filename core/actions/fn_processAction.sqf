#include "..\..\script_macros.hpp"
/*
    File: fn_processAction.sqf
    Author: Bryan "Tonic" Boardwine
    Modified : NiiRoZz,Paini
	
    Description:
    Master handling for processing an item.
    NiiRoZz : Added multiprocess
	Paini : Rewritten for I Inventory
*/
private ["_vendor","_type","_success","_newItemWeight","_hasLicense","_ui","_progress","_pgText","_cP","_materialsRequired","_materialsGiven","_text","_filter"];
_vendor = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_type = [_this,3,"",[""]] call BIS_fnc_param;
//Error check
if (isNull _vendor || _type isEqualTo "" || (player distance _vendor > 10)) exitWith {};
life_action_inUse = true;//Lock out other actions during processing.

if (isClass (missionConfigFile >> "ProcessAction" >> _type)) then {
    _filter = false;
    _materialsRequired = M_CONFIG(getArray,"ProcessAction",_type,"MaterialsReq");
    _materialsGiven = M_CONFIG(getArray,"ProcessAction",_type,"MaterialsGive");
    _text = M_CONFIG(getText,"ProcessAction",_type,"Text");
} else {_filter = true;};

if (_filter) exitWith {life_action_inUse = false;};
//Setup vars.

_hasLicense = LICENSE_VALUE(_type,"civ");
//Setup our progress bar.
disableSerialization;
"progressBar" cutRsc ["life_progress","PLAIN"];
_ui = uiNamespace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format ["%2 (1%1)...","%",(localize format ["%1",_text])];
_progress progressSetPosition 0.01;

life_is_processing = true;

if (_hasLicense) then {
	_success=true;
	while{_success}do
	{
		{
			_itemx=_x;
			if(_x select 1>({(_itemx select 0)==_x } count magazines player))exitWith{_success=false;hint "Du hast nicht mehr genug.";};
		}
		foreach _materialsRequired;
		_cp=0.01;
		for "_i" from 0 to 1 step 0 do {
        sleep  0.02;
        _cP = _cP + 0.01;
        _progress progressSetPosition _cP;
        _pgText ctrlSetText format ["%3 (%1%2)...",round(_cP * 100),"%",(localize format ["%1",_text])];
        if (_cP >= 1) exitWith {};
        if (player distance _vendor > 10) exitWith {};
		};
		{
			_itemx=_x;
			if(_x select 1>({(_itemx select 0)==_x } count magazines player))exitWith{_success=false;hint "Du hast nicht mehr genug.";};
		}
		foreach _materialsRequired;
		if(_success)then{
			{
				if!([false,_x select 0,_x select 1] call life_fnc_handleInv)exitWith{_success=false;hint "Du hast nicht mehr genug.";};
			}
			foreach _materialsRequired;
			{
				if!([true,_x select 0,_x select 1] call life_fnc_handleInv)exitWith{_success=false;hint "Du hast kein Platz mehr.";};
			}
			foreach _materialsGiven;
		};
    };
    "progressBar" cutText ["","PLAIN"];
}else{hint "Du hast keine Lizens.";}; 
life_is_processing = false; 
life_action_inUse = false;
