/*
Question 4:
Write a function that prints the largest of 3 numbers.
Example: (10, 25, 8) → 25.

int largestOfThree(int a, int b, int c);
*/

#include<iostream>
using namespace std;

int largestOfThree(int a, int b, int c){
    return a > b ? (a > c ? a : c) : (b > c ? b : c);
}

int main(){
    int a, b, c;
    cout << "Enter the three values: ";
    cin >> a >> b >> c;

    cout << largestOfThree(a, b, c);
}