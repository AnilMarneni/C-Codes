/*
Question 5:
Write a function that accepts a character ch and returns the character that comes after ch in the English alphabet.
Example: input='c' → output='d', input='z' → output='a'.

char nextAlphabet(char ch);
*/

#include<iostream>
using namespace std;

char nextAlphabet(char ch){
    if(ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122){
        if(ch == 'z'){
            return 'a';
        } else if(ch == 'Z'){
            return 'A';
        }

        return char(int(ch) + 1);
    }
    return '*';
}

int main(){
    char ch;
    cout << "Enter the charcter: ";
    cin >> ch;

    cout << nextAlphabet(ch);

}