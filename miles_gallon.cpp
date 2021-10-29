// This program will calculate average mile per gallon 

#include <iostream>
using namespace std;

int main()
{
    double gallons;  // Gallons used
    double miles;   // miles driven
    double totalGallons = 0; // total gallons used
    double totalMiles = 0; // total miles driven

    double milesPerGallon; // miles per gallon 
    double totalMilesPerGallon; // miles per gallon for entire trip


    // get miles used for first trip
    cout << "Enter miles driven (-1 to quit): ";
    cin >> miles;
    cout << fixed; // set float number format

    // exit if input is -1, if not proceed.
    while ( miles != -1 )
    {
        // prompt user for gallons
        cout << "Enter gallons used: ";
        cin >> gallons;

        // add miles and gallons for current trip
        totalMiles += miles;
        totalGallons += gallons;

        // calculate current miles / gallon
        if ( gallons != 0)
        {
            milesPerGallon = miles / gallons;
            cout << "MPG think tankful: " << milesPerGallon;
        } //end if

        // Calculate miles per gallon for the total trip
        if ( totalGallons != 0)
        {
            totalMilesPerGallon = totalMiles / totalGallons;
            cout << "\nTotal MPG: " << totalMilesPerGallon;
        } // end if

        // prompt user for new values of miles
        cout << "\n\nEnter miles driven (-1 to quit): ";
        cin >> miles;
    } // end while
} // end main