/*
    Author:
        Tim Beswick

    Description:
        Creates curator and assigns to player

    Parameter(s):
        None

    Return Value:
        None
*/
#include "script_component.hpp"

[QGVAR(curatorAssign), [player]] call CBA_fnc_serverEvent;
private _message = format ["%1 logged in", name player];
[QGVAR(hint), [_message]] call CBA_fnc_localEvent;
[QGVAR(hint), [_message, true]] call CBA_fnc_globalEvent;
[QGVAR(log), [_message]] call CBA_fnc_serverEvent;
