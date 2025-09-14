/*
Question 8: 
Input marks of 5 subjects (as integers), calculate total marks and percentage.
    Input: m1, m2, m3, m4, m5 →
    Output:
    total = m1 + m2 + m3 + m4 + m5
    percentage = (total / 500) * 100
*/

#include<iostream>
using namespace std;

int main(){
    int m1, m2, m3, m4, m5;
    cout << "Enter the marks of 5 subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    float total = m1 + m2 + m3 + m4 + m5;
    float percentage = (total / 500) * 100;

    cout << "Total = " << total << '\n' << "Percentage = " << percentage << '\n';

    return 0;
}