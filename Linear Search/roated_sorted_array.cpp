/*
Question 3:
Search in Rotated Array (Linear Search Constraint)
You are given a rotated sorted array (not necessarily distinct values).
Find the index of the target using only linear search.
If multiple occurrences exist, return the smallest index.
Example:
    Input: nums = [4, 5, 6, 7, 0, 1, 2], target = 0  
    Output: 4
*/

#include<iostream>
using namespace std;

int linear_rotated_sorted_array_search(int *arr, int n, int target){
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
    cout << "Enter the target element: ";
    cin >> target;

    int index = linear_rotated_sorted_array_search(arr, n, target);
    cout << "The element " << target << " is found in the rotated sorted array at the index " << index;

    return 0;
}