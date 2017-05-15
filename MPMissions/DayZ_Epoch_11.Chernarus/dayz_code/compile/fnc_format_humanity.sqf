// ===========================================================================
// FORMAT HUMANITY
// Used for format humanity (> 999999) in player_updateGUI.sqf
// ===========================================================================
private ['_number', '_minus', '_out'];
_number = _this select 0;
_minus = false;
if(_number < 0)then
{
  _hummanity = abs _number;
  _minus = true;
};
_out = [_number] call BIS_fnc_numberText;
if(_minus)then
{
  _out = '-' + _out;
};
_out
