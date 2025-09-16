/*
Question 10:

Write a function that prints the binary representation of a number without using built-in functions.
Example: 10 → 1010, 31 → 11111.

void printBinary(int n);
*/

#include<iostream>
using namespace std;

void printBinary(int n) {
    if (n == 0) {
        cout << "Binary Format = 0";
        return;
    }

    // Store binary digits in reverse
    string binary = "";
    while (n > 0) {
        binary = char('0' + (n % 2)) + binary;
        n /= 2;
    }

    cout << "Binary Format = " << binary;
}


int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    printBinary(n);
    return 0;
}