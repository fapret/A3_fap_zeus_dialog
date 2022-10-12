_index = lbCurSel 8914;
_unit = player;

private _curator = missionNamespace getVariable [format ["f_zeusSuperCurator_%1", _index],objNull];
if (isNull _curator) exitWith { 
format["Nadie esta usando este slot de zeus"] remoteExec ["hint",_unit];
};
if !(isNull _curator) then {
"Borrando zeus...." remoteExec ["hint",_unit];
unassignCurator _curator;
deleteVehicle _curator;
sleep 1;
} else {
(format["Nadie tiene zeus"]) remoteExec ["hint",_unit];
};

for "_i" from 0 to 3 do {
private _curator = missionNamespace getVariable [(format["f_zeusSuperCurator_%1",_i]),objNull];
if !(isNull _curator) then{
lbSetText [8914, _i, _curator getVariable ["ownername", objNull]];
lbSetColor [8914, _i, [1,1,1,1]];
} else {
if(_i == 3)then{lbSetText [8914, _i, "> Slot Libre (OPFOR)"];} else {if(_i == 2)then{lbSetText [8914, _i, "> Slot Libre (BLUFOR)"];} else {lbSetText [8914, _i, "> Slot Libre"];};};
lbSetColor [8914, _i, [0,126,0,1]];
};
};