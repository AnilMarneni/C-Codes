/*
Question 4:
Perform binary addition of two binary numbers (without using built-in functions).
Example: Input: 1011 + 1101 → Output: 11000
*/

#include<iostream>
using namespace std;

int binAddition(int a, int b){
    int result = 0, carry = 0, power = 1;

    while (a > 0 || b > 0 || carry > 0) {
        int bitA = a % 10;
        int bitB = b % 10;

        int sum = bitA + bitB + carry;

        result += (sum % 2) * power;
        carry = sum / 2;

        a /= 10;
        b /= 10;
        power *= 10;
    }

    return result;
}

int main(){
    int a, b;
    cout << "Enter the two binary numbers: ";
    cin >> a >> b;

    cout << a << " + " << b << " = " << binAddition(a, b);
    return 0;
}