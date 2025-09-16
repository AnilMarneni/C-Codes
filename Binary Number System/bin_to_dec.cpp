/*
Question 2:
Write a program to convert a binary number (input as integer) to its decimal equivalent.
Example: Input: 1011 → Output: 11
*/

#include<iostream>
using namespace std;

int binaryToDecimal(int n){
    int dec = 0, pow = 1;
    while(n > 0){
        int r = n % 10;
        dec += r * pow;
        pow *= 2;
        n /= 10;
    }
    return dec;
}

int main(){
    int n;
    cout << "Enter number for conversion: ";
    cin >> n;

    cout << "Decimal form of " << n << " = " << binaryToDecimal(n) << '\n';
    return 0;
}