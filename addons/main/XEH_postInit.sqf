#include "script_component.hpp"

if (isServer) then {
	call FUNC(initCurators);
};

if (hasInterface) then {
	if (isNil {player getVariable QGVAR(actionsAdded)}) then {
		player setVariable [QGVAR(actionsAdded), false, true];
	};
	call FUNC(addAction);
};

if (!isMultiplayer) then {
	[{
		missionNamespace setVariable [QGVAR(curatorNames), [(name player),"","","",""], true];
		player assignCurator (GVAR(curatorObjects) select 0);
	}, [], 0.5] call CBA_fnc_waitAndExecute;
};

{_x addCuratorEditableObjects [allMissionObjects "all", true]} forEach allCurators;