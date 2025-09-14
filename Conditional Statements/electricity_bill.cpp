/*
Questin 10:
Electricity bill calculation:
    First 100 units: ₹1.5 per unit
    Next 200 units: ₹2.5 per unit
    Beyond 300 units: ₹4 per unit
Add a surcharge of 10% if total bill exceeds ₹1000.
Write a program to calculate the final bill based on units consumed.
*/

#include<iostream>
using namespace std;

int main(){
    int units;
    cout << "Enter the number of units consumed: ";
    cin >> units;

    double bill = 0;

    if(units - 100 <= 0){
        bill += units * 1.5;
    } else{
        bill += 100 * 1.5;
        units -= 100;

        if(units - 200 <= 0){
            bill += units * 2.5;
        } else{
            bill += 200 * 2.5;
            units -= 200;

            bill += units * 4;
        }
    }

    if(bill > 1000){
        bill += (bill * 0.1);
    }

    cout << "Final bill = " << bill;
    return 0;
}