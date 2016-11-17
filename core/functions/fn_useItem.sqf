private["_idc","_selIndex","_item","_itemname","_sum"];

_idc = ctrlIDC (_this select 0);
_selIndex = _this select 1;
_item = format ["%1",lbData [_idc, _selIndex]];
//_itemname = format ["%1",lbText [_idc, _selIndex]];

if(_Item == "watessbares") then
	{
		player removeMagazine _Item;
		_sum=life_hunger +40;
		if(_sum > 100) then {_sum=100};
		life_hunger = _sum;
	};
if(_Item == "wasserzeugs") then
	{
		player removeMagazine _Item;
		_sum=life_thirst +40;
		if(_sum > 100) then {_sum=100};
		life_thirst = _sum;
	};
[] call life_fnc_hudUpdate;
