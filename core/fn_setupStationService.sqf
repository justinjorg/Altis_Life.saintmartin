/*
    File: fn_setupStationService.sqf
    Author: NiiRoZz
    Edit: BoGuu - Added Tanoa Stations

    Description:
    Add action fuel action in Station Service.

    put function in init file then execute it with:
    call getFuelpumps;
    getFuelpumps =
    {
        _pos = getArray(configFile >> "CfgWorlds" >> worldName >> "centerPosition");
        _Station = nearestobjects [_pos,["Land_fs_feed_F","Land_FuelStation_Feed_F"], 25000];
        _br = toString [13, 10];
        _tab = toString [9];

        _TexteSortie = "_NiiRoZz_Station_Essence = [" + _br;

        {
            _Array = [getpos _x];
            _TexteSortie = _TexteSortie + _tab + (str _Array);
            _TexteSortie = if (_forEachIndex < ((count _Station) - 1)) then {_TexteSortie + ", " + _br} else {_TexteSortie + _br};
        } forEach _Station;
        _TexteSortie = _TexteSortie + "];";
        hint "Completed";
        copyToClipboard _TexteSortie;
    };
*/
private _stationPositions = [
    [781.476,3575.47,0],
    [1442.73,3688.03,0],
    [1439.25,3652.38,0],
    [2223.59,3189.83,0],
    [2218.91,3165.23,0],
    [2381,3243.03,0],
    [2375.54,3221.09,0],
    [3086.35,2949.43,0],
    [2882.82,4595.27,0],
    [3903.41,2674.9,0],
    [2474.07,2363.5,0],
    [1357.88,2113.16,0],
    [4001.74,785.479,0]
];

{
    private _pump = nearestObjects [_x,["Land_fs_feed_F","Land_FuelStation_01_pump_F","Land_FuelStation_02_pump_F"],5] select 0;
    _pump setFuelCargo 0;
    _pump addAction [localize "STR_Action_Pump", life_fnc_fuelStatOpen, 1, 3, true, true, "", '_this distance _target < 5 && cursorObject isEqualTo _target'];
    false
} count _stationPositions;
