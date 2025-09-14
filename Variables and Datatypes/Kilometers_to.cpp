/*
Question 9:
Input distance in kilometers (float), convert and output distance in meters, centimeters, and millimeters.
    Input: km →
    Output:
    meters = km * 1000
    centimeters = km * 100000
    millimeters = km * 1,000,000
*/

#include<iostream>
using namespace std;

int main(){
    int kilometers;
    cout << "Enter the distancein Kilometers: ";
    cin >> kilometers;

    long int meters = kilometers * 100;
    long int centimeters = kilometers * 100000;
    long int millimeters = kilometers * 10000000;

    cout << kilometers << " kilometers in meters = " << meters << '\n'; 
    cout << kilometers << " kilometers in centimeters = " << centimeters << '\n'; 
    cout << kilometers << " kilometers in millimeters = " << millimeters << '\n'; 

    return 0;
}