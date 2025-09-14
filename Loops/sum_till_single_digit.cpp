/*
Question 9:
WAP to calculate the sum of digits of a number until the sum becomes a single digit.
Example:
Input: 9875 → 9+8+7+5 = 29 → 2+9 = 11 → 1+1 = 2 → Output: 2
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int midst = n, sum;
    do{
        sum = 0;
        while(midst > 0){
            sum += midst % 10;
            midst /= 10;
        }
        midst = sum;
    } while(sum > 9);

    cout << "Single digit sum = " << sum << '\n';
}