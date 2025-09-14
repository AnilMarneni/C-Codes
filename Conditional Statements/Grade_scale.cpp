/*
Question 6:
A student’s marks (0–100) are entered. Print the grade based on this scale:
    90–100: A
    75–89: B
    60–74: C
    40–59: D
    <40: Fail
*/

#include<iostream>
using namespace std;

int main(){
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if(marks >= 90 && marks <= 100){
        cout << "A Grade \n";
    } else if(marks >= 75 && marks <= 89){
        cout << "B Grade \n";
    } else if(marks >= 60 && marks <= 74){
        cout << "C Grade \n";
    } else if(marks >= 40 && marks <= 59){
        cout << "D Grade \n";
    } else{
        cout << "Fail. \n";
    }

    return 0;
}