/*
Question 9:
A company gives a bonus to employees as follows:
    If years of service > 10 → 10% of salary
    If 6–10 years → 8% of salary
    If <6 years → 5% of salary
Write a program to input salary & years of service, then compute the net bonus.
*/

#include<iostream>
using namespace std;

int main(){
    int salary, years;
    cout << "Enter your current salary: ";
    cin >> salary;
    cout << "Enter the number of years of service: ";
    cin >> years;

    float bonus;

    if(years >= 10){
        bonus = (salary * 0.1);
    } else if(years >= 6 && years < 10){
        bonus = (salary * 0.08);
    } else{
        bonus = (salary * 0.05);
    }

    cout << "You are going to get " << bonus << " as your bonus for your service for " << years << " years";

    return 0;
}