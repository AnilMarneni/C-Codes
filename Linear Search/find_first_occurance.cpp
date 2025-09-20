/*
Question 1:
Find Element in Array
Given an array nums of size n and an integer target, return the index of the first occurrence of target using linear search.
If the element does not exist, return -1.
Example:
    Input: nums = [4, 2, 7, 1, 9], target = 7  
    Output: 2
*/

#include<iostream>
using namespace std;

int linear_first_occurance_search(int *arr, int n, int target){
    for(int i = 0; i < n; i++){
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

    int index = linear_first_occurance_search(arr, n, target);
    cout << "The element " << target << " is found at index " << index << '\n';

    return 0;
}