// Recall that overnight flight is if the flight has 3 hours between 1am to 7am.
// This means if the start time is within the period and at 4am or earlier, and end time is at least 3 hours later.
// Or, if the end time is within the period and at 4am or later, and start time is at least 3 hours earlier.
// However, we have to deal with flights that go across midnight as well, making this arithmetic a little difficult.
// We define a helper function to tell us the difference between the times to check if it's at least 3 hours apart.

bool is_overnight_flight(int start_hour, int start_minute, int duration_hour, int duration_minute) {
	// Calculate the end hour and minute
	int end_hour, end_minute;
	end_minute = start_minute + duration_minute;
	end_hour = start_hour + duration_hour;
	if (end_minute >= 60) {
		end_minute = end_minute - 60;
		end_hour = end_hour + 1;
	}

	
}
