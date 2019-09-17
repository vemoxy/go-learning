/*
Kitty and Chick loves to travel!!
But Chick always tired whenever he takes an overnight flight.
Kitty and Chick discussed, and decided that if the flight time contains 1am-5am, then it is considered an overnight flight.
Let's write a function to tell Kitty and Chick whether a flight is an overnight flight, based on its starting time and duration.
Assume that:
1. Hours are in 24 hour format
2. A duration of a flight cannot exceed 12 hours.
*/
bool is_overnight_flight(int start_hour, int start_minute, int duration_hour, int duration_minute) {
	// Your answer here
}


int main() {
	printf("Kitty and Chick are taking a 10pm flight that lasts 5 hours and 45 minutes!\n");
	printf("Is it an overnight flight? Answer = %d\n", is_overnight_flight(22, 0, 5, 45));
	printf("---\n");
	printf("Kitty and Chick are taking another flight at 2.30am that lasts 4 hours 15 minutes!\n");
	printf("Is it an overnight flight? Answer = %d\n", is_overnight_flight(2, 30, 4, 15));
}
