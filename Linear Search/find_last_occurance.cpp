/*
Question 2:
Find Last Occurrence
Given an array nums and a target, return the last index where target occurs.
If not found, return -1.
Example:
    Input: nums = [5, 2, 3, 2, 4, 2], target = 2  
    Output: 5
*/

#include<iostream>
using namespace std;

int linear_last_occurance(int *arr, int n, int target){
    for(int i = n - 1; i >= 0; i--){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target element to search: ";
    cin >> target;

    int index = linear_last_occurance(arr, n, target);
    cout << "The last occurance of the element " << target << " is at index " << index << '\n';

    return 0;
}