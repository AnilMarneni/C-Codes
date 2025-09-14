/*
Question 5:
Input a character and check whether it is a vowel, consonant, or not an alphabet.
*/

#include<iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter the character: ";
    cin >> ch;

    if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            cout << "Vowel \n";
        } else{
            cout << "Consonant \n";
        }
    } else{
        cout << "Not an Alphabet \n";
    }

    return 0;
}