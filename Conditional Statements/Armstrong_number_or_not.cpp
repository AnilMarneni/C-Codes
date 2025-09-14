/*
Question 5:
For any 3 digit number check whether it’s an Armstrong number or not.
Armstrong number is a number that is equal to the sum of cubes of its digits.
Eg: 371 is an armstrong number. 
    3*3*3 + 7*7*7 + 1*1*1 = 371
*/

#include<iostream>
using namespace std;

int main(){
    int n, r, s = 0;
    cout << "Enter the number: ";
    cin >> n;
    int temp = n;

    while(n > 0){
        r = n % 10;
        s += (r * r * r);
        n /= 10;
    }

    n = temp;

    if(n == s){
        cout << "Armstrong Number \n";
    } else{
        cout << "Not an Armstrong Number \n";
    }

    return 0;
}