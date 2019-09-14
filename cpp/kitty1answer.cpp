// First answer
bool can_date(int weekday) {
	// Kitty
	if (weekday == 3 || weekday == 4) {
		return false;
	}
	// Chick
	if (weekday == 4 || weekday == 7) {
		return false;
	}
	return true;
}


// Can combine kitty and chick checks together to eliminate extra 4
bool can_date(int weekday) {
	if (weekday == 3 || weekday == 4 || weekday == 7) {
		return false;
	}
	return true;
}


/*
We realize that the expression `weekday == 3` actually evaluates to a true or false value
And also `weekday == 3 || weekday == 4` also evaluates to a true or false value
Hence we can use the expression in the `if ()` clause directly as the return value
However, since we are now checking for "not equals", this means that we have to change the || to &&.
*/
bool can_date(int weekday) {
	return weekday != 3 && weekday != 4 && weekday != 7;
}
