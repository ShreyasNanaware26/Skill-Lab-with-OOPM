/*Write a C++ program to input electricity unit charge 
and calculate the total electricity bill 
according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.
*/

#include <iostream>
#include <iomanip>  //this is for setpricision() function which helps in telling the compiler that how many places after the decimal point the answer should be printed
#include <cstdio>    //it helps to use the C language syntax

using namespace std;

int main()
{
    int units_consumed;     //variable declaration
    float amt, total_amt, sur_charge;     //variable declaration

    cout << "Enter total units consumed: ";   //asking for user input
    cin >> units_consumed;   //storing the user input


/* Calculating the  electricity bill on the basis of units consumed 
          with the help  of given limitting conditions */

    if(units_consumed <= 50)
    {
        amt = units_consumed * 0.50;
    }

    else if(units_consumed <= 150)
    {
        amt = 25 + ((units_consumed-50) * 0.75);
    }

    else if(units_consumed <= 250)
    {
        amt = 100 + ((units_consumed-150) * 1.20);
    }

    else
    {
        amt = 220 + ((units_consumed-250) * 1.50);
    }

    sur_charge = amt * 0.20;
    total_amt  = amt + sur_charge;    // adding an extra 20% charge on the electricity bill
	//cout << "Total bill is = Rs. " <<total_amt;
   // cout<< "Electricity Bill = Rs. " << setprecision (2)  << fixed << total_amt;
	printf("Electricity Bill = Rs. %.2f", total_amt);
	
    return 0;
}


