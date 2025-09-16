/*
Question 7:
Write a function that returns the GCD and LCM of two numbers using loops.
Example: (12, 18) → GCD=6, LCM=36.

int GCD(int a, int b);
int LCM(int a, int b);
*/

#include<iostream>
using namespace std;

int GCD(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}


int LCM(int a, int b){
    return (a * b) / GCD(a, b);
}

int main(){
    int a, b;
    cout << "Enter a, b: ";
    cin >> a >> b;

    cout << "GCD = " << GCD(a, b) << endl;
    cout << "LCM = " << LCM(a, b) << endl;
}