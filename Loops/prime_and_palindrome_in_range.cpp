/*
WAP to print all the numbers between 1 and N that are both prime and palindrome.
Example:
Input: 100 → Output: 2, 3, 5, 7, 11
*/

#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the range: ";
    cin >> num;

    for(int n = 2; n < num; n++){
        bool isPrime = true, isPalindrome = false;

        for(int i = 2; i * i < n; i++){
            if(n % i == 0){
                isPrime = false;
                break;
            }
        }

        int temp = n, rev = 0;
        while(n > 0){
            rev = rev * 10 + n % 10;
            n /= 10;
        }
        n = temp;
        if(n == rev){
            isPalindrome = true;
        }

        if(isPalindrome && isPrime){
            cout << n << ' ';
        }
    }
}