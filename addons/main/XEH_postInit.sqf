#include "script_component.hpp"

if (hasInterface) then {
    [
        {time > 0 && !(isNull player) && !(isNull TFAR_currentUnit)},
        {

            [QGVAR(OnRadiosReceivedEH), "OnRadiosReceived", {
                _this params ['_unit', '_radioClass'];

                {
                    [_x] call FUNC(setRadioPresetFrequencies);
                } forEach _radioClass;

            }, player] call TFAR_fnc_addEventHandler;
        }
    ] call CBA_fnc_waitUntilAndExecute;
};


