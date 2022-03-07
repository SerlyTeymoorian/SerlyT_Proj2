/*
Calculating the cost of trasportation cost during the trip
    -rental car
    -private car
    -taxi 
    -company covered taxi 
*/
#include "functions.h"

double privateVehicle(bool privCar)
{   
    if(privCar)
    {

    }
    else
    {
        return 0; 
    }

}

double carRental(int days, bool rented)
{
    if(rented) //car was rented 
    {

    }
    else //car was not rented 
    {
        return 0; //no car rental price 
    }
}

double taxiCost()
{
    double totalTaxiCost =0; 
    //ask the user to input total taxi cost 
    printf("\nHow much did you spend on taxi during your trip?");
    scanf("%f", &totalTaxiCost); //save it 
    //return the result 
    return totalTaxiCost; 
}

double taxiCostCoveredByCompany(int days)
{

}
