/*
Question 6: Print the Butterfly Pattern
For n = 4

*      *
**    **
***  ***
********
********
***  ***
**    **
*      *
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        for(int j = 1; j <= 2 * (n - i); j++){
            cout << "  ";
        }
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << '\n';
    }
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        for(int j = 1; j <= 2 * (n - i); j++){
            cout << "  ";
        }
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << '\n';
    }

    return 0;
}