/*
Question 4:
Search for Closest Element
Given an array nums and a number target, return the index of the element closest in value to target.
If multiple are equally close, return the smaller index.
Must use linear search.
Example:
    Input: nums = [10, 22, 15, 7, 30], target = 20  
    Output: 2   (15 is closest to 20)
*/

#include<iostream>
using namespace std;

int closest(int *arr, int n, int target){
    int lower_close = INT_MIN, higher_close = INT_MAX;
    for(int i = 0; i < n; i++){
        if(arr[i] <= target && arr[i] > lower_close){
            lower_close = arr[i];
        } else if(arr[i] >= target && arr[i] < higher_close){
            higher_close = arr[i];
        }
    }
    return ((target - lower_close) < (higher_close - target) ? lower_close : higher_close);
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

    int ans = closest(arr, n, target);
    cout << "The element closest to " << target << " in the array is " << ans << '\n';

    return 0;
}