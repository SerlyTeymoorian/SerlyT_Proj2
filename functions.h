#ifndef FUNCTIONS_H
#define FUNCTIONS_H

//no argument required 
//asks the user the total number of days on trip
//returns the number days entered by the user 
int getTotalDays();

//no argument required 
//asks the user the departure time 
//returns the time of the departure as an int  
int getDepartueTime();

//no argument required 
//asks the user the arrival time 
//returns the time of the arrival as an int  
int getArrivalTime();

//no argument required 
//ask the the user if they rented car
//return bool (true or false)
bool rentedCar();

//1 arg: if a car was rented or not  
//if the user rented car then ask the user the car rental price per day 
//else (not rented a car) do not ask the user to enter rental car price and return 0
//returns the rent price of a car as double  (if car was rented)
double getPriceCarRentals(bool rented);

//no argument required 
// ask the user if they used private car 
//return true or false 
bool privateCar(); 

//1 arg: whether or not private car was used 
//if yes: ask the user number of miles driven and calculate the cost of driving it 
// if no: return 0 
//calculates and returns the total money cost of driving private vehicle based on milage 
double privateVehicle(bool privCar); 

//2 args: number of days the car was rented, the car was rented or not 
//if car was rented: calculate the cost of car rental 
//if not rented: return 0  
//returns the total money cost of renting car 
double carRental(int days, bool rented); 

//no argument required 
// returns the cost of taxi for the entire trip
double taxiCost(); 

//1 arg: number of trip days 
//calculates and returns how much the company will cover taxi cost 
double taxiCostCoveredByCompany(int days); 

//no argument required 
//returns the total cost of having breakfast
double breakfastCost();

//no argument required 
//returns the total cost of having breakfast
double lunchCost();

//no argument required 
//returns the total cost of having breakfast
double dinnerCost();

//3 args: number of days of trip, deprature time, arrival time
//calculates and returns the number of breakfast meals covered by the company 
int countBreakfast(int days, int departureTime, int arrivalTime);

//3 args: number of days of trip, deprature time, arrival time
//calculates and returns the number of lunch meals covered by the company 
int countLunch(int days, int departureTime, int arrivalTime);

//3 args: number of days of trip, deprature time, arrival time
//calculates and returns the number of dinner meals covered by the company 
int countDinner(int days, int departureTime, int arrivalTime);

//3 args: numebr of breakfast, number of lunch, number of dinner 
//calculates and returns the total amount of meal cost covered by the company 
int companyCoveredFood(int breakfast, int lunch, int dinner);

//no argument required
//return the total parking cost during the trip 
double parkingFee();  

//nor argument required 
//return the company covered cost for parking 
double companyCoveredParkingFee();

//no argument required 
//returns total money value of Conference Fees
double conferenceFee();

//1 arg: total number of days 
//calculate and return total hotel cost 
double totalHotelCost(int days);

//1 arg: total number of days 
//calculate and return hotel cost covered by the company 
double hotelCostCompanyCovered(int days);

//no argument required 
//returns the airfare cost 
double airfareCost();

#endif