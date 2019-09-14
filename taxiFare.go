// You can edit this code!
// Click here and start typing.
package main

import "fmt"

func taxiFare(weekday, startTime, speed, distance int) float64 {
	distanceTravelled := 0
	totalFare := 0.0
	currentWeekday := weekday
	currentTimeInSeconds := startTime * 60
	
	// Loop variables
	baseFare := 0.0
	distanceToTravel := 0
	
	validateTime(&currentWeekday, &currentTimeInSeconds)
	
	for distanceTravelled < distance {
		switch {
		case distanceTravelled < 1000:
			distanceToTravel = 1000
			baseFare = 3.4
		case distanceTravelled < 10000:
			distanceToTravel = 400
			baseFare = 0.22
		default:
			distanceToTravel = 350
			baseFare = 0.22
		}
		
		totalFare += calculateSurchargedFare(currentWeekday, currentTimeInSeconds, baseFare)
		
		distanceTravelled += distanceToTravel
		currentTimeInSeconds += (distanceToTravel / 50) * speed
		
		validateTime(&currentWeekday, &currentTimeInSeconds)
	}
	
	return totalFare
}


func calculateSurchargedFare(currentWeekday int, currentTimeInSeconds int, baseFare float64) float64 {
	if currentWeekday >= 1 && currentWeekday <= 5 && currentTimeInSeconds >= 360*60 && currentTimeInSeconds < 540*60 {
		return baseFare * 1.25
	} else if currentTimeInSeconds >= 1080*60 && currentTimeInSeconds < 1440*60 {
		return baseFare * 1.25
	} else if currentTimeInSeconds >= 0 && currentTimeInSeconds < 360*60 {
		return baseFare * 1.5
	} else {
		return baseFare;
	}
}


func validateTime(weekday, currentTimeInSeconds *int) {
	for *currentTimeInSeconds >= 86400 {
		*currentTimeInSeconds -= 86400
		*weekday += 1
	}
	for *weekday > 7 {
		*weekday -= 7
	}
}


func main() {
	weekday := 1
	startTime := 350
	speed := 6
	distance := 15000
	fmt.Println("Weekday =", weekday)
	fmt.Println("Start Time =", startTime)
	fmt.Println("Speed =", speed)
	fmt.Println("Distance =", distance)
	
	fare := taxiFare(weekday, startTime, speed, distance)
	fmt.Println("Taxi fare =", fare)
}

