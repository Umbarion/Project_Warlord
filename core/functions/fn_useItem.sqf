private["_idc","_selIndex","_item","_itemname","_sum"];
hint "mumu";
_idc = ctrlIDC (_this select 0);
_selIndex = _this select 1;
_item = format ["%1",lbData [_idc, _selIndex]];
//_itemname = format ["%1",lbText [_idc, _selIndex]];

if(_Item in ["PWA_beefjerky","PWA_donut"]) then{
	player removeMagazine _Item;
	_sum=life_hunger +40;
	if(_sum > 100) then {_sum=100};
	life_hunger = _sum;
};

if(_Item in ["PWA_coffee","PWA_waterbottle","PWA_energydrink"]) then{
	hint "akcka";
	player removeMagazine _Item;
	_sum=life_thirst +40;
	if(_sum > 100) then {_sum=100};
	life_thirst = _sum;
};

if(_Item in ["PWA_coffee","PWA_energydrink"]) then{
	[] spawn{
		life_energydrink_effect = time;
		player enableFatigue false;
		waitUntil {!alive player OR ((time - life_energydrink_effect) > (3 * 60))};
		player enableFatigue true;
	};
};

if(_Item in ["PWA_jerrycan_full","PWA_jerrycan_full"]) then{
	private ["_vehicle","_displayName","_upp","_ui","_progress","_pgText","_cP","_previousState"];
	_vehicle = cursorObject;
	life_interrupted = false;

	if (isNull _vehicle) exitWith {hint localize "STR_ISTR_Jerry_NotLooking"};
	if (!(_vehicle isKindOF "LandVehicle") && !(_vehicle isKindOf "Air") && !(_vehicle isKindOf "Ship")) exitWith {};
	if (player distance _vehicle > 7.5) exitWith {hint localize "STR_ISTR_Jerry_NotNear"};

	player removeMagazine _Item;
	life_action_inUse = true;

	_displayName = FETCH_CONFIG2(getText,"CfgVehicles",(typeOf _vehicle),"displayName");

	_upp = format [localize "STR_ISTR_Jerry_Process",_displayName];

	//Setup our progress bar.
	disableSerialization;
	"progressBar" cutRsc ["life_progress","PLAIN"];
	_ui = uiNamespace getVariable "life_progress";
	_progress = _ui displayCtrl 38201;
	_pgText = _ui displayCtrl 38202;
	_pgText ctrlSetText format ["%2 (1%1)...","%",_upp];
	_progress progressSetPosition 0.01;
	_cP = 0.01;

	for "_i" from 0 to 1 step 0 do {
		if (animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
			[player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
			player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
			player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
		};
		sleep 0.2;
		if (isNull _ui) then {
			"progressBar" cutRsc ["life_progress","PLAIN"];
			_ui = uiNamespace getVariable "life_progress";
			_progressBar = _ui displayCtrl 38201;
			_titleText = _ui displayCtrl 38202;
		};
		_cP = _cP + 0.01;
		_progress progressSetPosition _cP;
		_pgText ctrlSetText format ["%3 (%1%2)...",round(_cP * 100),"%",_upp];
		if (_cP >= 1) exitWith {};
		if (!alive player) exitWith {};
		if (life_interrupted) exitWith {};
	};
	life_action_inUse = false;
	"progressBar" cutText ["","PLAIN"];
	player playActionNow "stop";
	if (!alive player) exitWith {};
	if (life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel","PLAIN"];};


	switch (true) do {
		case (_vehicle isKindOF "LandVehicle"): {
			if (!local _vehicle) then {
				[_vehicle,(Fuel _vehicle) + 0.5] remoteExecCall ["life_fnc_setFuel",_vehicle];
			} else {
				_vehicle setFuel ((Fuel _vehicle) + 0.5);
			};
		};

		case (_vehicle isKindOf "Air"): {
			if (!local _vehicle) then {
				[_vehicle,(Fuel _vehicle) + 0.2] remoteExecCall ["life_fnc_setFuel",_vehicle];
			} else {
				_vehicle setFuel ((Fuel _vehicle) + 0.2);
			};
		};

		case (_vehicle isKindOf "Ship"): {
			if (!local _vehicle) then {
				[_vehicle,(Fuel _vehicle) + 0.35] remoteExecCall ["life_fnc_setFuel",_vehicle];
			} else {
				_vehicle setFuel ((Fuel _vehicle) + 0.35);
			};
		};
	};
	titleText[format [localize "STR_ISTR_Jerry_Success",_displayName],"PLAIN"];
	[true,"PWA_jerrycan_empty",1] call life_fnc_handleInv;
};
[] call life_fnc_hudUpdate;
