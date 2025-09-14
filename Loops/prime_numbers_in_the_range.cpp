/*
Question 4:
For a positive N, WAP that prints all the prime numbers from 2 to N. (Assume N >= 2)
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the range: ";
    cin >> n;

    for(int x = 2; x <= n; x++){
        bool isPrime = true;
        for(int i = 2; i * i <= x; i++){
            if(x % i == 0){
                isPrime = false;
            }
        }
        if(isPrime){
            cout << x << ' ';
        }
    }

    return 0;
}