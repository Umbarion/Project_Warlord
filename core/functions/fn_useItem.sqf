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
	[] spawn life_fnc_jerryRefuel;
};
[] call life_fnc_hudUpdate;
