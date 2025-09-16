/*
Question 9:

Write a function to count the number of digits in a number without using strings.
Example: 12345 → 5.

int countDigits(int n);
*/

#include<iostream>
using namespace std;

int countDigits(int n){
    int digits = 0;
    while(n > 0){
        digits++;
        n /= 10;
    }
    return digits;
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << n << " has " << countDigits(n) << " digits. \n";
    return 0;
}