/*
Question 2:
Enter cost of 3 items from the user (using float datatype) a pencil, a pen and an eraser. You have to output the total cost of the items back to the user as their bill.
(Addon: You can also try adding 18% GST tax to the items in the bill as an advanced problem)
*/

#include<iostream>
using namespace std;

int main(){
    float pencil, pen, eraser;
    cout << "Enter the cost of the pencil: ";
    cin >> pencil;
    cout << "Enter the cost of the pen: ";
    cin >> pen;
    cout << "Enter the cost of the eraser: ";
    cin >> eraser;

    float sum = pencil + pen + eraser;
    float GST = (sum * 18) / 100;

    float total = sum + GST;
    cout << "Final Amount to pay = " << total;

    return 0;
}