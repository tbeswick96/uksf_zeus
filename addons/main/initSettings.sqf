[
    QGVAR(curatorsMax),
    "SLIDER",
    QUOTE(Maximum Curators),
    "UKSF",
    [0, 20, 5, 0],
    2
] call CBA_Settings_fnc_init;

[
    QGVAR(curatorsLocked),
    "CHECKBOX",
    QUOTE(Curators Start Locked),
    "UKSF",
    false,
    2
] call CBA_Settings_fnc_init;

[
    QGVAR(curatorsWhitelist),
    "EDITBOX",
    QUOTE(UID Whitelist),
    "UKSF",
    "",
    2,
    {
        params ["_value"];
        GVAR(curatorsWhitelistArray) = _value splitString ",";
    }
] call CBA_Settings_fnc_init;
