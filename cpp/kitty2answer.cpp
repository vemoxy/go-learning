// Recall that overnight flight is if the flight covers 1am-5am.
bool is_overnight_flight(int start_hour, int start_minute, int duration_hour, int duration_minute) {
	// We work in minutes because it's difficult to consider both hours and minutes at the same time.
	int start_time_in_minutes = start_hour * 60 + start_minute;
	int duration_in_minutes = duration_hour * 60 + duration_minute;

	// Generally 2 cases:
	// 1. If start time is between 1am (exclusive) and 5am (inclusive), then definitely false.
	if (start_time_in_minutes > 60 && start_time_in_minutes <= 60 * 5) {
		return false;
	}

	// 2. If end time > 5am.
	int end_time_in_minutes = start_time_in_minutes + duration_in_minutes;
	// Note we need to check for case where end time is affter 12am.
	if (end_time_in_minutes >= 60 * 24) {
		end_time_in_minutes = end_time_in_minutes -= 60 * 24;
	}
	if (end_time_in_minutes >= 60 * 5) {
		return true;
	}
	return false;
}

// Advanced: Can you think of what additional cases need to be covered, if we consider > 12 hour flights?
