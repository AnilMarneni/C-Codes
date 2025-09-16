/*
Question 1:

Write a function to check if a number is a palindrome.
Example: 121 → Palindrome, 321 → Not Palindrome.

bool isPalindrome(int n);
*/

#include<iostream>
using namespace std;

bool isPalindrome(int n){
    int temp = n, rev = 0;
    while(temp > 0){
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return n == rev ? true : false;
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;

    if(isPalindrome(n)){
        cout << "It is a Palindrome. \n";
    } else{
        cout << "It is not a Palindrome. \n";
    }

    return 0;
}