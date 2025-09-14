/*
Question 1:
Write a C++ program to get a number from the user and print whether it's positive, negative or zero
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(n > 0){
        cout << "positive number \n";
    } else if(n == 0){
        cout << "zero \n";
    } else{
        cout << "negative number \n";
    }

    return 0;
}