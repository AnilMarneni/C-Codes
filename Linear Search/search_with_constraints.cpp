/*
Question 5:
Search with Constraints (Special Condition)
You are given an array nums of length n and a target.
Return the first index i such that:
nums[i] == target, and
the sum of digits of nums[i] is a prime number.
If no such index exists, return -1.
Example:
    Input: nums = [14, 23, 35, 23], target = 23  
    Output: 1   (23 found at index 1, digit sum = 5 which is prime) 
*/

#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int sumOfDigits(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int linaer_constraint_search(int *arr, int n, int target){
    for(int i = 0; i <= n; i++){
        if(arr[i] == target && isPrime(sumOfDigits(arr[i]))){
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

    int index = linaer_constraint_search(arr, n, target);
    cout << target << " found at index " << index << ", digit sum = " << sumOfDigits(arr[index]) << " which is prime";

    return 0;
}