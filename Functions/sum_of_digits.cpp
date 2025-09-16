/*
Question 2:
Write a function to calculate the sum of digits of a number.
Example: 123 → 6.

int sumOfDigits(int n);
*/

#include<iostream>
using namespace std;

int sumOfDigits(int n){
    int digit = 0;
    while(n > 0){
        digit++;
        n /= 10;
    }
    return digit;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << n << " has " << sumOfDigits(n) << " digits. \n";
    return 0; 
}