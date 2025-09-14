/*
Question 8:
Write a program that takes the time in 24-hour format (0–23) and prints whether it is Morning, Afternoon, Evening, or Night.
*/

#include<iostream>
using namespace std;

int main(){
    int hour;
    cout << "Enter the current hour: ";
    cin >> hour;

    if(hour >= 6 && hour < 12){
        cout << "Morning \n";
    } else if(hour >= 12 && hour < 15){
        cout << "AfterNoon \n";
    } else if(hour >= 15 && hour < 19){
        cout << "Evening \n";
    } else{
        cout << "Night \n";
    }
    
    return 0;
}