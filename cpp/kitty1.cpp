/*
Chick goes for dance on Thursdays and Sundays, and cannot go on a date.
Kitty has class on Wednesdays and Thursdays, and cannot go on a date.
Write a function that returns whether Kitty and Chick are both available to go on a date <3
Assume that `weekday` is an integer representing the weekday, with 1 being Monday, 2 being Tuesday, and so on, till 7 meaning Sunday.
*/
bool can_date(int weekday) {
	return false;
}


int main() {
	printf("Can kitty and chick date on Monday? Answer = %d\n", can_date(1));
	printf("Can kitty and chick date on Tuesday? Answer = %d\n", can_date(2));
	printf("Can kitty and chick date on Wednesday? Answer = %d\n", can_date(3));
	printf("Can kitty and chick date on Thursday? Answer = %d\n", can_date(4));
	printf("Can kitty and chick date on Friday? Answer = %d\n", can_date(5));
	printf("Can kitty and chick date on Saturday? Answer = %d\n", can_date(6));
	printf("Can kitty and chick date on Sunday? Answer = %d\n", can_date(7));
	printf("---\n");
	printf("Actually Kitty and Chick can date everyday!! <3\n")
}
