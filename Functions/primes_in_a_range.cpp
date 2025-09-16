/*
Question 8:
Write a function to check whether a number is prime or not. Then use it to print all primes in a given range.
Example: 10 to 30 → 11, 13, 17, 19, 23, 29.

bool isPrime(int n);
void printPrimesInRange(int start, int end);
*/

#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

void printPrimesInRange(int start, int end){
    for(int i = start; i <= end; i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }
}

int main(){
    int start, end;
    cout << "Enter the starting and ending points: ";
    cin >> start >> end;

    printPrimesInRange(start, end);
    return 0;
}