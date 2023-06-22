#include "script_component.hpp"

params ['_dialog'];

private _currentChannel = ([TF_sw_dialog_radio] call TFAR_fnc_getSwChannel) + 1;

_knobBgControl = _dialog displayCtrl ETFR_R147_IDC_CHANNEL_KNOB_BACKGROUND;
_knobBgControl ctrlSetText format [QPATHTOF(textures\r147p_ch%1_ca.paa), _currentChannel];
