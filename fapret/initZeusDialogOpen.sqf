createDialog "fapret_zeusdialog";

_fapretzeuscontrol = (findDisplay 8912) displayCtrl 8913;
_fapretsuperzeuscontrol = (findDisplay 8912) displayCtrl 8914;

for "_i" from 0 to 3 do {
private _curator = (missionNamespace getVariable [(format["f_zeusSuperCurator_%1",_i]),objNull]);
if !(isNull _curator) then{
lbAdd [8914,_curator getVariable ["ownername", objNull]];
lbSetColor [8914, _i, [1,1,1,1]];
} else {
if(_i == 3)then{
lbAdd [8914, "> Slot Libre (OPFOR)"];
} else {
if(_i == 2)then{lbAdd [8914,"> Slot Libre (BLUFOR)"];
} else {
lbAdd [8914, "> Slot Libre"];
};
};
lbSetColor [8914, _i, [0,126,0,1]];
};
};

for "_i" from 0 to 9 do {
private _curator = (missionNamespace getVariable [(format["f_zeusCurator_%1",_i]),objNull]);
if !(isNull _curator) then{
lbAdd [8913,_curator getVariable ["ownername", objNull]];
lbSetColor [8913, _i, [1,1,1,1]];
} else {
if(_i == 9)then{
lbAdd [8913, "> Slot Libre (OPFOR)"];
} else {
if(_i == 8)then{lbAdd [8913,"> Slot Libre (BLUFOR)"];
} else {
lbAdd [8913, "> Slot Libre"];
};
};
lbSetColor [8913, _i, [0,126,0,1]];
};
};

lbSetCurSel [8913, 0];
lbSetCurSel [8914, 0];