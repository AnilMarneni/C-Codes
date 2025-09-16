/*
Question 3:
Check if a given binary number is a palindrome.
Example: Input: 10101 → Output: Yes (palindrome)
*/

#include<iostream>
using namespace std;

bool isPalindrome(int n){
    int temp = n, rev = 0;
    while(n > 0){
        int r = n % 10;
        if(r > 1){
            return false;
        }
        rev = rev * 10 + r;
        n /= 10;
    }
    n = temp;
    return n == rev;
}

int main(){
    int n;
    cout << "Enter the Binary Number: ";
    cin >> n;

    if(isPalindrome(n)){
        cout << "The binary number is palindrome. \n";
    } else{
        cout << "The binary number is not a palindrome. \n";
    }

    return 0;
}