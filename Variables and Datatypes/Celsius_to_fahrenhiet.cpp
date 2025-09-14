/*
Question 6:
Input temperature in Celsius (float), convert and output it in Fahrenheit.
    Input: Celsius (C) →
    Output: Fahrenheit (F) = (C * 9/5) + 32
*/

#include<iostream>
using namespace std;

int main(){
    float celsius, fahrenhiet;
    cout << "Enter the temperature in Celsius: ";
    cin >> celsius;

    fahrenhiet = (celsius * (9 / 5)) + 32;
    cout << "The temperature in Fahrenhiet = " << fahrenhiet;

    return 0;
}