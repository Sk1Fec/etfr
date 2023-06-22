#include "script_component.hpp"

params ['_control', '_button'];

private _currentChannel = ([TF_sw_dialog_radio] call TFAR_fnc_getSwChannel) + 1;

private _change = 0;
if (_button == 1) then {
    _change = 1;
} else {
    _change = -1;
};

_change = (_currentChannel + _change);
_change = _change min 4;
_change = _change max 1;

if (_change == _currentChannel) exitWith {};

_knobBgControl = (findDisplay ETFR_R147P_IDD) displayCtrl ETFR_R147_IDC_CHANNEL_KNOB_BACKGROUND;
_knobBgControl ctrlSetText format [QPATHTOF(textures\r147p_ch%1_ca.paa), _change];

[TF_sw_dialog_radio, _change - 1] call TFAR_fnc_setSwChannel;
[TF_sw_dialog_radio, false] call TFAR_fnc_showRadioInfo;
