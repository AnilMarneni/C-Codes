/*
Question 9: Print Pascal’s Triangle Pattern
For n = 5

    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        int coeff = 1;
        for(int j = 1; j <= n - i; j++){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            cout << coeff << ' ';
            coeff = coeff * (i - j) / j;
        }
        cout << '\n';
    }

    return 0;
}