/*
Question 5: 
Input an integer and output its square and cube.
    Input: n →
    Output: square = n * n, cube = n * n * n
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int square = n * n;
    int cube = n * n * n;

    cout << "The Square of " << n << " is " << square << '\n';
    cout << "The Cube of " << n << " is " << cube << '\n';

    return 0;
}