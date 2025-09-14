/*
Question 3:
WAP to input a number and check whether the number is an Armstrong number or not.
*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int temp = num;
    int digits = log10(num) + 1;

    int r, sum = 0;
    while(num > 0){
        r = num % 10;
        sum += pow(r, digits);
        num /= 10;
    }

    num = temp;

    if(num == sum){
        cout << "Armstrong number. \n";
    } else{
        cout << "Not an Armstrong number. \n";
    }

    return 0;
}