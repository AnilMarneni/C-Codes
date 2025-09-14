/*
Question 6:
WAP to count the number of digits in a number entered by the user.
Example:
Input: 4529 → Output: 4 digits
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int digits = 0;
    while(n > 0){
        digits += 1;
        n /= 10;
    }

    cout << n << " has " << digits << " digits\n";

    return 0;
}