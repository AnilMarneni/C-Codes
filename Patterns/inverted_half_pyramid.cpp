/*
Question 5: Print the Inverted Half Pyramid Pattern (rotated by 180°)
For n = 4

      *
    * *
  * * *
* * * *
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++){
            cout << "  ";
        }
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << '\n';
    }
    
    return 0;
}