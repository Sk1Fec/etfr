#include "script_component.hpp"

params ['_radio'];

private _channelPreset =[_radio,  "tf_channel_freqs", []] call TFAR_fnc_getWeaponConfigProperty;

if ((count _channelPreset) > 0) then {
    { [_radio, _forEachIndex + 1, _x] call TFAR_fnc_setChannelFrequency; } forEach _channelPreset;
};
