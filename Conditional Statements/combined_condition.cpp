/*
Question 7:
Take an integer input and check:
    If divisible by both 3 and 5 → print FizzBuzz
    If divisible only by 3 → print Fizz
    If divisible only by 5 → print Buzz
    Otherwise → print the number itself.
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if(n % 3 == 0){
        cout << "Fizz";
    } if(n % 5 == 0){
        cout << "Buzz";
    } if(n % 3 != 0 && n % 5 != 0){
        cout << n;
    }

    return 0;
}