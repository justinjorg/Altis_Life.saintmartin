/*
    File: fn_copLicenseNPCs.sqf
    Description: Spawns 4 NPCs to grant specialized Cop licenses (CG, Sheriff, State, cAir).
    Condition: Strictly requires playerSide == west AND life_coplevel >= 1
*/

if (!isServer) exitWith {};

// --- CONFIGURATION: Define your 4 locations [X, Y, Z] here ---
private _loc1 = [3200.5, 12500.2, 0]; // Location for NPC 1 (Coast Guard - cg)
private _loc2 = [3205.5, 12500.2, 0]; // Location for NPC 2 (Sheriff)
private _loc3 = [3210.5, 12500.2, 0]; // Location for NPC 3 (State Police)
private _loc4 = [3215.5, 12500.2, 0]; // Location for NPC 4 (Cop Air - cAir)

private _npcClass = "B_officer_F"; // Standard Blufor Officer model

// --- NPC 1: Grants Coast Guard License ("cg") ---
private _npc1 = createVehicle [_npcClass, _loc1, [], 0, "CAN_COLLIDE"];
_npc1 allowDamage false;
_npc1 disableAI "ALL";
_npc1 setDir 90;
[
    _npc1,
    [
        "<t color='#0055FF'>Get Coast Guard License</t>",
        {
            if (missionNamespace getVariable ["license_cop_cg", false]) exitWith { hint "You already have the Coast Guard license."; };
            missionNamespace setVariable ["license_cop_cg", true];
            [2] call life_fnc_updatePartial; // Save to database
            hint "Coast Guard License Granted.";
        },
        "",
        1.5,
        true,
        true,
        "",
        "playerSide == west && {life_coplevel >= 1}", // Strict check: Must be cop AND rank 1+
        5
    ]
] remoteExec ["addAction", 0, _npc1];

// --- NPC 2: Grants Sheriff License ("Sheriff") ---
private _npc2 = createVehicle [_npcClass, _loc2, [], 0, "CAN_COLLIDE"];
_npc2 allowDamage false;
_npc2 disableAI "ALL";
_npc2 setDir 90;
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
        "",
        1.5,
        true,
        true,
        "",
        "playerSide == west && {life_coplevel >= 1}",
        5
    ]
] remoteExec ["addAction", 0, _npc2];

// --- NPC 3: Grants State Police License ("State") ---
private _npc3 = createVehicle [_npcClass, _loc3, [], 0, "CAN_COLLIDE"];
_npc3 allowDamage false;
_npc3 disableAI "ALL";
_npc3 setDir 90;
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
        "",
        1.5,
        true,
        true,
        "",
        "playerSide == west && {life_coplevel >= 1}",
        5
    ]
] remoteExec ["addAction", 0, _npc3];

// --- NPC 4: Grants Cop Air License ("cAir") ---
private _npc4 = createVehicle [_npcClass, _loc4, [], 0, "CAN_COLLIDE"];
_npc4 allowDamage false;
_npc4 disableAI "ALL";
_npc4 setDir 90;
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
        "",
        1.5,
        true,
        true,
        "",
        "playerSide == west && {life_coplevel >= 1}",
        5
    ]
] remoteExec ["addAction", 0, _npc4];
