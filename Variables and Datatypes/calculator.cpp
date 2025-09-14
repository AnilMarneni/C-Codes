/*
Question 7:
Input two numbers, output their sum, difference, product, and quotient (use float for division).
    Input: a, b →
    Output:
    sum = a + b
    difference = a - b
    product = a * b
    quotient = a / b
*/

#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter the two numbers: ";
    cin >> a >> b;

    cout << "Sum = " << a + b << '\n';
    cout << "Difference = " << a - b << '\n';
    cout << "Product = " << a * b << '\n';
    cout << "Quotient = " << a / b << '\n';
    cout << "Remainder = " << a % b << '\n';

    return 0;
}
