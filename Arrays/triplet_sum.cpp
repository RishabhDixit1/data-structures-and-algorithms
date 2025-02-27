/*
Given an array of integers, nums, and an integer value, target,
determine if there are any three integers in nums whose sum equals the target.
Return TRUE if three such integers are found in the array. Otherwise, return FALSE.
*/

#include <bits/stdc++.h>
using namespace std;
string findTriplet(int arr[], int n, int target)
{
    int l, r;
    /* Sort the elements */
    sort(arr, arr + n);
    /* start with the first element */
    for (int i = 0; i < n - 2; i++) {
        l = i + 1; // index of the first element
        r = n - 1; // last element
        while (l < r) {
            if (arr[i] + arr[l] + arr[r] == target) {
                return "TRUE";
            }
            else if (arr[i] + arr[l] + arr[r] < target)
                l++;
            else 
            // A[i] + A[l] + A[r] is greater than target
                r--;
        }
    }
    // If no triplet was found
    return "FALSE";
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6};
	int target = 9;
	int n = sizeof(arr) / sizeof(arr[0]);
	cout<<findTriplet(arr, n, target)<<endl;
	return 0;
}