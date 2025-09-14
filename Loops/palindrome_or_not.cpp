/*
Question 8:
WAP to check whether a number entered by the user is a palindrome or not (a number that reads the same forward and backward).
Example:
Input: 121 → Output: Palindrome
Input: 123 → Output: Not Palindrome
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int temp = n, rev = 0;
    while(n > 0){
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    n = temp;
    if(n == rev){
        cout << "Palindrome \n";
    } else{
        cout << "Not a Palindrome \n";
    }
    return 0;
}