/*
    File: init.sqf
    Author: Salutesh aka Steve
    
    Description:
	Main initialize file.
    
*/
private ["_timeStamp"];

_timeStamp = diag_tickTime;
diag_log "---------------------------------- Starting RG Exile Client Init -----------------------------------";
diag_log "------------------------------------------- Version 0.1 --------------------------------------------";
// Run on all player clients incl. player host and headless clients
if (!isDedicated) then {	
	// Run on all player clients incl. player host
	if (hasInterface) then {
		call exile_fnc_statusbar;			// Load statusbar
	};
};
diag_log format["End of Exile RG Client Init :: Total Execution Time %1 seconds ",(diag_tickTime) - _timeStamp];
