/*
Question 7:
WAP to reverse a number entered by the user.
Example:
Input: 1234 → Output: 4321
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int rev = 0;
    while(n > 0){
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    cout << rev;
    return 0;
}