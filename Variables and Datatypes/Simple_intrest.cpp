/*
Question 3:
Build a Simple Interest Calculator.
    Input: principal(P), rate(R), time(T)
    Output: (P * R * T) / 100
*/

#include<iostream>
using namespace std;

int main(){
    float P, T, R;
    cout << "Enter the principle amount: ";
    cin >> P;
    cout << "Enter the Time duration: ";
    cin >> T;
    cout << "Enter the rate of intrest: ";
    cin >> R;

    float SI = (P * T * R) / 100;
    cout << "The Simple intrest = " << SI;

    return 0;
}