/*
    File: fn_welcomeNotification.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Called upon first spawn selection and welcomes our player.
*/
disableSerialization;
[
        "",
        0,
        0.2,
        10,
        0,
        0,
        8
] spawn BIS_fnc_dynamicText;

createDialog "RscDisplayWelcome";

_display = findDisplay 999999;
_text1 = _display displayCtrl 1100;
_buttonSpoiler = _display displayCtrl 2400;
_textSpoiler = _display displayCtrl 1101;
_text2 = _display displayCtrl 1102;

_message = "";
_message = _message + "<t align='center' size='7' shadow='0' color='#FF8C00'> The-Programmer </t><br /><br />";
_message = _message + (localize "STR_PR_1") + "<br /><br />";
_message = _message + (localize "STR_PR_2") + "<br /><br />";
_message = _message + "<a color='#00DFFF'>•</a> Discord The-Programmer : <a href='https://discord.the-programmer.com/' color='#56BDD6'> https://discord.the-programmer.com/</a><br />";
_message = _message + "<a color='#00DFFF'>•</a> Map Saint-Martin : <a href='https://www.the-programmer.com/product/map-saint-martin/' color='#56BDD6'> https://www.the-programmer.com/product/map-saint-martin/</a><br />";
_message = _message + "<a color='#00DFFF'>•</a> Saint-Martin Sources : <a href='https://www.the-programmer.com/product/map-saint-martin-sources/' color='#56BDD6'> https://www.the-programmer.com/product/map-saint-martin-sources/</a><br />";
_message = _message + "<a color='#00DFFF'>•</a> Trailer : <a href='https://www.youtube.com/watch?v=9jH76QGa0Qg' color='#56BDD6'> https://www.youtube.com/watch?v=9jH76QGa0Qg</a><br /><br />";
_message = _message + (localize "STR_PR_3");

//Fill only the first text
_text1 ctrlSetStructuredText (parseText _message);

//Resize StructuredText component to display the scrollbar if needed
_positionText1 = ctrlPosition _text1;
_yText1 = _positionText1 select 1;
_hText1 = ctrlTextHeight _text1;
_text1 ctrlSetPosition [_positionText1 select 0, _yText1, _positionText1 select 2, _hText1];
_text1 ctrlCommit 0;
//Hide second text, spoiler text and button
_buttonSpoiler ctrlSetFade 1;
_buttonSpoiler ctrlCommit 0;
_buttonSpoiler ctrlEnable false;
_textSpoiler ctrlSetFade 1;
_textSpoiler ctrlCommit 0;
_text2 ctrlSetFade 1;
_text2 ctrlCommit 0;
