#include <iostream>
using namespace std;

// IMPORTANT
// BINARY SEARCH ALGORITHM CAN ONLY BE APPLIED ON SORTED SET OF NUMBERS

int binary_search (int key, int arr[], int n)
{   
    // Start -> Starting Index of the Array
    int start = 0;
    // End -> Ending Index of the Array
    int end = n-1;
    // Mid -> Element at the Middle Position
    int mid = start + (end-start)/2;
    // mid = (start + end)/2 
    // Above statement may cause Integer Overflow
    // e.g. When start = INT_MAX & end = INT_MAX 
    // (start + end) causes Integer Overflow

    while(start<=end)
    {
        if(key>arr[mid])
        {
            // If the key is greater than mid number, Go right
            start = mid+1;
        }
        else if(key<arr[mid])
        {
            // If the key is smaller than mid number, Go left
            end = mid-1;
        }
        else if(key==arr[mid])
        {
            // If key is found, Return its index
            return mid;
        }

        mid =  start + (end-start)/2;
        // Calculate Mid at each iteration
    }
    return -1;
    // Return -1 if the Key is absent in the array
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    cout<<"Index Result for Binary Search for 3 : "<<binary_search(3,arr,5);
    // Binary Search Call for (Key,Array,Size of Array)
}

// Time Complexity : O(log N)
// Space Complexity : O(1) 
