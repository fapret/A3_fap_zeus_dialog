_index = lbCurSel 8913;
_unit = player;

if (!isNull (getAssignedCuratorLogic _unit)) exitWith { 
"Ya posees zeus, remuevelo antes" remoteExec ["hint",_unit];
};
private _curator = missionNamespace getVariable [format ["f_zeusCurator_%1", _index],objNull];
if !(isNull _curator) then {
format["Alguien ya esta usando el modo zeus en este slot: %1, reasignando zeus a ti", _curator getVariable ["ownername", objNull]] remoteExec ["hint",_unit];
unassignCurator _curator;
deleteVehicle _curator;
sleep 1;
}
else
{
unassignCurator _curator;
if(_index == 9)then{f_var_sideCenter = createCenter east;} else {if(_index == 8)then{f_var_sideCenter = createCenter west;} else {f_var_sideCenter = createCenter sideLogic;};};
"Asignandote zeus...." remoteExec ["hint",_unit]
};
_curator = (createGroup f_var_sideCenter) createUnit ["ModuleCurator_F",[0,0,0],[],0,""];
_curator setVariable ["owner",format["%1",getPlayerUID _unit],true];
_curator setVariable ["ownername",format["%1",name _unit],true];
_curator setVariable ["showNotification",false,true];
[_curator, [-1, -2, 0]] call bis_fnc_setcuratorvisionmodes;
_unit assignCurator _curator;
missionNamespace setVariable [format ["f_zeusCurator_%1", _index],_curator, true];
private _curator = getAssignedCuratorLogic _unit;
systemChat format["%1: Entro en modo zeus", _curator getVariable ["ownername", objNull]];
if (isNull _curator) then { _curator = _unit; };
if (isNull _curator || typeOf _curator != "ModuleCurator_F") exitWith {
systemChat format["Error al colocarle zeus a %1", _unit];
};

for "_i" from 0 to 9 do {
private _curator = missionNamespace getVariable [(format["f_zeusCurator_%1",_i]),objNull];
if !(isNull _curator) then{
lbSetText [8913, _i, _curator getVariable ["ownername", objNull]];
lbSetColor [8913, _i, [1,1,1,1]];
} else {
if(_i == 9)then{lbSetText [8913, _i, "> Slot Libre (OPFOR)"];} else {if(_i == 8)then{lbSetText [8913, _i, "> Slot Libre (BLUFOR)"];} else {lbSetText [8913, _i, "> Slot Libre"];};};
lbSetColor [8913, _i, [0,126,0,1]];
};
};