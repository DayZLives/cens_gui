// ===========================================================================
// SERVER SIDE
// ===========================================================================
if (isServer) then {
  diag_log "Loading custom server compiles";
};

// ===========================================================================
// CLIENT SIDE
// ===========================================================================
if (!isDedicated) then {
  diag_log "Loading custom client compiles";
  player_updateGui = compile preprocessFileLineNumbers "dayz_code\compile\player_updateGui.sqf";
};

// ===========================================================================
// BOTH
// ===========================================================================
fnc_format_humanity = compile preprocessFileLineNumbers "dayz_code\compile\fnc_format_humanity.sqf";
