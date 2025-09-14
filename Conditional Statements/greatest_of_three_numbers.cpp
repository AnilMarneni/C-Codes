/*
Question 4:
Write a program that takes three numbers as input and prints the largest among them using only if-else.
*/

#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cout << "Enter the three numbers: ";
    cin >> a >> b >> c;

    if(a > b && a > c){
        cout << a << " is the largest \n";
    } else if(b > a && b > c){
        cout << b << " is the largest \n";
    } else{
        cout << c << " is the largest \n";
    }

    return 0;
}