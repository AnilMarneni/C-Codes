/*
Question 1:
WAP to find the Factorial of a number entered by the user. 
Hint: factorial of a number
(n)=n*(n-1)*(n-2)*(n-3)*......*1 
and exists for positive numbers only.We write factorial as n! So, factorial of 
0!=1, 1!=1, 2!=2, 3!=6, 4!=24 and so on.
Note- Please do not confuse factorial with NOT EQUAL TO operator, they are not the same
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    do{
        cout << "Enter number: ";
        cin >> n;
    } while(n < 0);

    long long int fact = 1;
    for(int i = 2; i <= n; i++){
        fact *= i;
    }

    cout << n << "! = " << fact;
    return 0;
}