class fap_RscFrame
{
	deletable = 0;
	colorBackground[] = 
	{
		0,
		0,
		0,
		0
	};
	colorText[] = 
	{
		1,
		1,
		1,
		1
	};
	x = 0;
	y = 0;
	w = 0.3;
	h = 0.3;
	type = 0;
	idc = -1;
	style = 64;
	shadow = 2;
	font = "PuristaMedium";
	sizeEx = 0.02;
	text = "";
};
class fap_RscText
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 0;
	idc = -1;
	colorBackground[] = 
	{
		0,
		0,
		0,
		0
	};
	colorText[] = 
	{
		1,
		1,
		1,
		1
	};
	text = "";
	fixedWidth = 0;
	colorShadow[] = 
	{
		0,
		0,
		0,
		0.5
	};
	tooltipColorText[] = 
	{
		1,
		1,
		1,
		1
	};
	tooltipColorBox[] = 
	{
		1,
		1,
		1,
		1
	};
	tooltipColorShade[] = 
	{
		0,
		0,
		0,
		0.65
	};
	x = 0;
	y = 0;
	h = 0.037;
	w = 0.3;
	style = 0;
	shadow = 1;
	font = "PuristaMedium";
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	linespacing = 1;
};
class fap_RscListBox
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 5;
	rowHeight = 0;
	colorText[] = 
	{
		1,
		1,
		1,
		1
	};
	colorDisabled[] = 
	{
		1,
		1,
		1,
		0.25
	};
	colorScrollbar[] = 
	{
		1,
		0,
		0,
		0
	};
	colorSelect[] = 
	{
		0,
		0,
		0,
		1
	};
	colorSelect2[] = 
	{
		0,
		0,
		0,
		1
	};
	colorSelectBackground[] = 
	{
		0.95,
		0.95,
		0.95,
		1
	};
	colorSelectBackground2[] = 
	{
		1,
		1,
		1,
		0.5
	};
	colorBackground[] = 
	{
		0,
		0,
		0,
		0.3
	};
	soundSelect[] = 
	{
		"\A3\ui_f\data\sound\RscListbox\soundSelect",
		0.09,
		1
	};
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
	arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
	colorPicture[] = 
	{
		1,
		1,
		1,
		1
	};
	colorPictureSelected[] = 
	{
		1,
		1,
		1,
		1
	};
	colorPictureDisabled[] = 
	{
		1,
		1,
		1,
		0.25
	};
	colorPictureRight[] = 
	{
		1,
		1,
		1,
		1
	};
	colorPictureRightSelected[] = 
	{
		1,
		1,
		1,
		1
	};
	colorPictureRightDisabled[] = 
	{
		1,
		1,
		1,
		0.25
	};
	colorTextRight[] = 
	{
		1,
		1,
		1,
		1
	};
	colorSelectRight[] = 
	{
		0,
		0,
		0,
		1
	};
	colorSelect2Right[] = 
	{
		0,
		0,
		0,
		1
	};
	tooltipColorText[] = 
	{
		1,
		1,
		1,
		1
	};
	tooltipColorBox[] = 
	{
		1,
		1,
		1,
		1
	};
	tooltipColorShade[] = 
	{
		0,
		0,
		0,
		0.65
	};
	class ListScrollBar
	{
		color[] = 
		{
			1,
			1,
			1,
			1
		};
		autoScrollEnabled = 1;
	};
	x = 0;
	y = 0;
	w = 0.3;
	h = 0.3;
	colorShadow[] = 
	{
		0,
		0,
		0,
		0.5
	};
	style = 16;
	font = "PuristaMedium";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	shadow = 0;
	period = 1.2;
	maxHistoryDelay = 1;
};
class fap_RscButton
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 1;
	text = "";
	colorText[] = 
	{
		1,
		1,
		1,
		1
	};
	colorDisabled[] = 
	{
		1,
		1,
		1,
		0.25
	};
	colorBackground[] = 
	{
		0,
		0,
		0,
		0.5
	};
	colorBackgroundDisabled[] = 
	{
		0,
		0,
		0,
		0.5
	};
	colorBackgroundActive[] = 
	{
		0,
		0,
		0,
		1
	};
	colorFocused[] = 
	{
		0,
		0,
		0,
		1
	};
	colorShadow[] = 
	{
		0,
		0,
		0,
		0
	};
	colorBorder[] = 
	{
		0,
		0,
		0,
		1
	};
	soundEnter[] = 
	{
		"\A3\ui_f\data\sound\RscButton\soundEnter",
		0.09,
		1
	};
	soundPush[] = 
	{
		"\A3\ui_f\data\sound\RscButton\soundPush",
		0.09,
		1
	};
	soundClick[] = 
	{
		"\A3\ui_f\data\sound\RscButton\soundClick",
		0.09,
		1
	};
	soundEscape[] = 
	{
		"\A3\ui_f\data\sound\RscButton\soundEscape",
		0.09,
		1
	};
	idc = -1;
	url = "";
	style = 2;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	shadow = 2;
	font = "PuristaMedium";
	sizeEx = "(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	offsetX = 0.003;
	offsetY = 0.003;
	offsetPressedX = 0.002;
	offsetPressedY = 0.002;
	borderSize = 0;
};
class fapret_zeusdialog
{
	idd = 8912;
	
	class controls
	{
class fapret_zeusmanagermain: fap_RscFrame
{
	idc = 8911;

	text = "Zeus Manager by Fapret (Santiago Diaz)";
	x = 0.304062 * safezoneW + safezoneX;
	y = 0.247 * safezoneH + safezoneY;
	w = 0.391875 * safezoneW;
	h = 0.396 * safezoneH;
	colorText[] = {0,0,0,1};
	font = "RobotoCondensed";
	colorBackground[] = {0,126,0,0.3};
	sizeEx = 1 * GUI_GRID_H * GUI_GRID_H;
};
class RscText_1000: fap_RscText
{
	idc = 8910;

	text = "Zeus Slots";
	x = 0.360781 * safezoneW + safezoneX;
	y = 0.269 * safezoneH + safezoneY;
	w = 0.0567187 * safezoneW;
	h = 0.044 * safezoneH;
};
class RscText_1001: fap_RscText
{
	idc = 8909;

	text = "Super Zeus Slots";
	x = 0.567031 * safezoneW + safezoneX;
	y = 0.269 * safezoneH + safezoneY;
	w = 0.0825 * safezoneW;
	h = 0.044 * safezoneH;
};
class fapret_zeuslist: fap_RscListBox
{
	idc = 8913;

	x = 0.314375 * safezoneW + safezoneX;
	y = 0.313 * safezoneH + safezoneY;
	w = 0.149531 * safezoneW;
	h = 0.231 * safezoneH;
};
class fapret_superzeuslist: fap_RscListBox
{
	idc = 8914;

	x = 0.530937 * safezoneW + safezoneX;
	y = 0.313 * safezoneH + safezoneY;
	w = 0.154687 * safezoneW;
	h = 0.231 * safezoneH;
};
class fapret_zeusfree: fap_RscButton
{
	idc = 8908;

	text = "Liberar Slot";
	x = 0.355625 * safezoneW + safezoneX;
	y = 0.555 * safezoneH + safezoneY;
	w = 0.0670312 * safezoneW;
	h = 0.033 * safezoneH;
	action = "execVM 'fapret\initZeusDialogFreeSlot.sqf'";
};
class fapret_superzeusfree: fap_RscButton
{
	idc = 8907;

	text = "Liberar Slot"; //--- ToDo: Localize;
	x = 0.577344 * safezoneW + safezoneX;
	y = 0.555 * safezoneH + safezoneY;
	w = 0.0670312 * safezoneW;
	h = 0.033 * safezoneH;
	action = "execVM 'fapret\initZeusDialogFreeSuperSlot.sqf'";
};
class fapret_zeusmanagerclose: fap_RscButton
{
	idc = 8906;

	text = "CERRAR";
	x = 0.443281 * safezoneW + safezoneX;
	y = 0.654 * safezoneH + safezoneY;
	w = 0.103125 * safezoneW;
	h = 0.055 * safezoneH;
	action = "closeDialog 1"
};
class fapret_zeusalloc: fap_RscButton
{
	idc = 8905;

	text = "Usar Slot";
	x = 0.355625 * safezoneW + safezoneX;
	y = 0.599 * safezoneH + safezoneY;
	w = 0.0670312 * safezoneW;
	h = 0.033 * safezoneH;
	action = "execVM 'fapret\initZeusDialogJoinSlot.sqf'";
};
class fapret_superzeusalloc: fap_RscButton
{
	idc = 8904;

	text = "Usar Slot";
	x = 0.577344 * safezoneW + safezoneX;
	y = 0.599 * safezoneH + safezoneY;
	w = 0.0670312 * safezoneW;
	h = 0.033 * safezoneH;
		action = "execVM 'fapret\initZeusDialogJoinSuperSlot.sqf'";
};
class RscText_1004: fap_RscText
{
	idc = 8903;
	text = "Zeus Manager by Fapret (Santiago Diaz)";
	x = 0.402031 * safezoneW + safezoneX;
	y = 0.247 * safezoneH + safezoneY;
	w = 0.185625 * safezoneW;
	h = 0.022 * safezoneH;
	colorText[] = {0,126,0,1};
};
};
};
