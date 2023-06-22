/* #Zudisa
$[
	1.063,
	["r147p",[["0","0","1","1"],"0.0025","0.004","GUI_GRID"],0,1,1],
	[1201,"r147p_background",[1,"\z\etfr\addons\r147\textures\r147p_dialog_ca.paa",["0.371609 * safezoneW + safezoneX","0.1755 * safezoneH + safezoneY","0.28875 * safezoneW","0.4763 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1604,"increase_volume",[1,"",["0.493299 * safezoneW + safezoneX","0.364707 * safezoneH + safezoneY","0.144854 * safezoneW","0.174891 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1605,"decrease_volume",[1,"",["0.493814 * safezoneW + safezoneX","0.221714 * safezoneH + safezoneY","0.144338 * safezoneW","0.142993 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1200,"KNOB",[1,"\z\etfr\addons\r147\textures\r147p_ch1_ca.paa",["0.39275 * safezoneW + safezoneX","0.3658 * safezoneH + safezoneY","0.0855937 * safezoneW","0.1496 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]]
]
*/

class ETFR_R147P_Dialog
{
	idd = ETFR_R147P_IDD;
	movingEnable = 1;
	controlsBackground[] = {};
	objects[] = {};
    onLoad = QUOTE(_this call FUNC(onDialogLoad));
	onUnload = "['OnRadioOpen', player, [player, TF_sw_dialog_radio, false, 'r147p_radio_dialog', false]] call TFAR_fnc_fireEventHandlers;";
	controls[]=
	{
		"background",
		"channel_knob_background",
		"channel_knob"
	};

////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by Sk1F, v1.063, #Jumowi)
////////////////////////////////////////////////////////

	class background: RscBackPicture
	{
		idc = ETFR_R147_IDC_BACKGROUND;
		text = QPATHTOF(textures\r147p_dialog_ca.paa);
		x = "0.371609 * safezoneW + safezoneX";
		y = "0.1755 * safezoneH + safezoneY";
		w = "0.28875 * safezoneW";
		h = "0.4763 * safezoneH";
	};

    // ["0.387594 * safezoneW + safezoneX","0.3592 * safezoneH + safezoneY","0.0943594 * safezoneW","0.1705 * safezoneH"]
	class channel_knob_background: RscBackPicture
	{
		idc = ETFR_R147_IDC_CHANNEL_KNOB_BACKGROUND;
		text = QPATHTOF(textures\r147p_ch1_ca.paa);
		x = "0.387594 * safezoneW + safezoneX";
		y = "0.3592 * safezoneH + safezoneY";
		w = "0.0943594 * safezoneW";
		h = "0.1705 * safezoneH";
	};

    class channel_knob: HiddenRotator
	{
		// [TF_sw_dialog_radio, 2] call TFAR_fnc_setSwChannel;
		idc = ETFR_R147_IDC_CHANNEL_KNOB;
		text = "";
		x = "0.387594 * safezoneW + safezoneX";
		y = "0.3592 * safezoneH + safezoneY";
		w = "0.0943594 * safezoneW";
		h = "0.1705 * safezoneH";
		onMouseButtonDown = QUOTE(_this call FUNC(onChannelKnobMouseButtonDown));
	};
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////
