/*
Question 4:
Write a program to calculate the area of a circle.
    Input: r(radius)
    Output: PI * r * r(area)
*/

#include<iostream>
#define PI 3.14
using namespace std;

int main(){
    int r;
    cout << "Enter the radius of the circle: ";
    cin >> r;

    float area = PI * r * r;
    cout << "The area of the circle = " << area;

    return 0;
}