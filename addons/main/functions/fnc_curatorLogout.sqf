/*
    Author:
        Tim Beswick

    Description:
        Logs player out of curator

    Parameter(s):
        None

    Return Value:
        None
*/
#include "script_component.hpp"

[QGVAR(curatorUnassign), [getAssignedCuratorLogic player]] call CBA_fnc_serverEvent;
[QGVAR(hint), [format ["%1 logged out", name player]]] call CBA_fnc_localEvent;
[QGVAR(hint), [format ["%1 logged out", name player], true]] call CBA_fnc_globalEvent;
[QGVAR(log), [format ["%1 logged out", name player]]] call CBA_fnc_serverEvent;
