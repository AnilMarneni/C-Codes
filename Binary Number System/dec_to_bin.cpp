/*
Question 1:
Convert a given decimal number into its binary equivalent.
Example: Input: 10 → Output: 1010
*/

#include<iostream>
using namespace std;

int decimalToBinary(int n){
    int bin = 0, pow = 1;
    while(n > 0){
        int r = n % 2;
        bin += r * pow;
        pow *= 10;
        n /= 2;
    }
    return bin;
}

int main(){
    int n;
    cout << "Enter the number for conversion: ";
    cin >> n;

    cout << "Binary form of " << n << " = " << decimalToBinary(n);
    return 0;
}