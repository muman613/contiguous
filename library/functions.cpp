//
// Created by muman on 4/22/2019.
//

#include "functions.h"

// Utility functions to find minimum and maximum of
// two elements
static int min(int x, int y) { return (x < y)? x : y; }
static int max(int x, int y) { return (x > y)? x : y; }

// Returns length of the longest contiguous subarray
int findLength(int arr[], int n)
{
    int max_len = 1; // Initialize result
    for (int i=0; i<n-1; i++)
    {
        // Initialize min and max for all subarrays starting with i
        int mn = arr[i], mx = arr[i];

        // Consider all subarrays starting with i and ending with j
        for (int j=i+1; j<n; j++)
        {
            // Update min and max in this subarray if needed
            mn = min(mn, arr[j]);
            mx = max(mx, arr[j]);

            // If current subarray has all contiguous elements
            if ((mx - mn) == j-i)
                max_len = max(max_len, mx-mn+1);
        }
    }
    return max_len; // Return result
}

int findLength(const int_vector & arr) {
    int max_len = 1; // Initialize result
    size_t n = arr.size();

    for (int i=0; i<n-1; i++)
    {
        int mn = arr[i],
            mx = arr[i];

        for (int j = i+1 ; j<n ; j++) {
            mn = min(mn, arr[j]);
            mx = max(mx, arr[j]);

            // If current subarray has all contiguous elements
            if ((mx - mn) == j-i)
                max_len = max(max_len, mx-mn+1);
        }
    }

    return max_len; // Return result
}
