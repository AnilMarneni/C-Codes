/*
Question 6:
Write a function to check if a number is an Armstrong number.
Example: 153 → Yes, 121 → No.

bool isArmstrong(int n);
*/

#include<iostream>
#include<cmath>
using namespace std;

int digits(int n){
    int d = 0;
    while(n > 0){
        d++;
        n /= 10;
    }
    return d;
}

bool isArmstrong(int n){
    int temp = n, r, s = 0, d = digits(n);
    while(n > 0){
        r = n % 10;
        s += pow(r, d);
        n /= 10;
    }
    n = temp;
    return s == n;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(isArmstrong(n)){
        cout << "It is an Armstrong number. \n";
    } else{
        cout << "It is not an Armstrong number. \n";
    }

    return 0;
}