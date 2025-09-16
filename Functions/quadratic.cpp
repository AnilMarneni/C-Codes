/*
Question 3:
Write a function which takes 2 numbers a & b as parameters and returns:
a² + b² + 2ab.
Example: a=2, b=3 → 25.

int quadraticExpression(int a, int b);
*/

#include<iostream>
using namespace std;

int quadraticExpression(int a, int b){
    return (a * a) + (b * b) + (2 * a * b);
}

int main(){
    int a, b;
    cout << "Enter the values: ";
    cin >> a >> b;

    cout << "(" << a << " + " << b << ") ^ 2 = " << quadraticExpression(a, b);
    return 0;
}