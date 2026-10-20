/*
    File: fn_markerCopNPCs.sqf
    Description: Spawns 4 NPCs at markers copnpc_1 through copnpc_4 to grant specialized Cop licenses.
    Condition: Strictly requires playerSide == west AND life_coplevel >= 1
*/

if (!isServer) exitWith {}; // Prevent duplicate spawns from clients

private _npcClass = "B_officer_F"; // Standard Blufor Officer model

// --- NPC 1: Grants Coast Guard License ("cg") at marker 'copnpc_1' ---
private _pos1 = getMarkerPos "copnpc_1";
if !(_pos1 isEqualTo [0,0,0]) then {
    private _npc1 = createVehicle [_npcClass, _pos1, [], 0, "CAN_COLLIDE"];
    _npc1 allowDamage false;
    _npc1 disableAI "ALL";
    _npc1 setDir (markerDir "copnpc_1");
    [
        _npc1,
        [
            "<t color='#0055FF'>Get Coast Guard License</t>",
            {
                if (missionNamespace getVariable ["license_cop_cg", false]) exitWith { hint "You already have the Coast Guard license."; };
                missionNamespace setVariable ["license_cop_cg", true];
                [2] call life_fnc_updatePartial; 
                hint "Coast Guard License Granted.";
            },
            "", 1.5, true, true, "",
            "playerSide == west && {life_coplevel >= 1}", // Strict check: Cop AND rank 1+
            5
        ]
    ] remoteExec ["addAction", 0, _npc1];
};

// --- NPC 2: Grants Sheriff License ("Sheriff") at marker 'copnpc_2' ---
private _pos2 = getMarkerPos "copnpc_2";
if !(_pos2 isEqualTo [0,0,0]) then {
    private _npc2 = createVehicle [_npcClass, _pos2, [], 0, "CAN_COLLIDE"];
    _npc2 allowDamage false;
    _npc2 disableAI "ALL";
    _npc2 setDir (markerDir "copnpc_2");
    [
        _npc2,
        [
            "<t color='#0055FF'>Get Sheriff License</t>",
            {
                if (missionNamespace getVariable ["license_cop_sheriff", false]) exitWith { hint "You already have the Sheriff license."; };
                missionNamespace setVariable ["license_cop_sheriff", true];
                [2] call life_fnc_updatePartial;
                hint "Sheriff License Granted.";
            },
            "", 1.5, true, true, "",
            "playerSide == west && {life_coplevel >= 1}",
            5
        ]
    ] remoteExec ["addAction", 0, _npc2];
};

// --- NPC 3: Grants State Police License ("State") at marker 'copnpc_3' ---
private _pos3 = getMarkerPos "copnpc_3";
if !(_pos3 isEqualTo [0,0,0]) then {
    private _npc3 = createVehicle [_npcClass, _pos3, [], 0, "CAN_COLLIDE"];
    _npc3 allowDamage false;
    _npc3 disableAI "ALL";
    _npc3 setDir (markerDir "copnpc_3");
    [
        _npc3,
        [
            "<t color='#0055FF'>Get State Police License</t>",
            {
                if (missionNamespace getVariable ["license_cop_state", false]) exitWith { hint "You already have the State Police license."; };
                missionNamespace setVariable ["license_cop_state", true];
                [2] call life_fnc_updatePartial;
                hint "State Police License Granted.";
            },
            "", 1.5, true, true, "",
            "playerSide == west && {life_coplevel >= 1}",
            5
        ]
    ] remoteExec ["addAction", 0, _npc3];
};

// --- NPC 4: Grants Cop Air License ("cAir") at marker 'copnpc_4' ---
private _pos4 = getMarkerPos "copnpc_4";
if !(_pos4 isEqualTo [0,0,0]) then {
    private _npc4 = createVehicle [_npcClass, _pos4, [], 0, "CAN_COLLIDE"];
    _npc4 allowDamage false;
    _npc4 disableAI "ALL";
    _npc4 setDir (markerDir "copnpc_4");
    [
        _npc4,
        [
            "<t color='#0055FF'>Get Pilot License</t>",
            {
                if (missionNamespace getVariable ["license_cop_cAir", false]) exitWith { hint "You already have the Pilot license."; };
                missionNamespace setVariable ["license_cop_cAir", true];
                [2] call life_fnc_updatePartial;
                hint "Cop Air License Granted.";
            },
            "", 1.5, true, true, "",
            "playerSide == west && {life_coplevel >= 1}",
            5
        ]
    ] remoteExec ["addAction", 0, _npc4];
};
