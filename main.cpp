#include<iostream>
#include "functions.h"

using namespace std;

// Driver program to test above function
int main()
{
    int arr[] = {1, 56, 58, 57, 90, 92, 94, 93, 91, 45};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Length of the longest contiguous subarray is "
         << findLength(arr, n) << endl;

    int_vector vec = {1, 56, 58, 57, 90, 92, 94, 93, 91, 45};

    cout << "Length of the longest contiguous subarray is "
         << findLength(vec) << endl;

    return 0;
}
