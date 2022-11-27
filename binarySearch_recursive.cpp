#include <iostream>
using namespace std;

// IMPORTANT
// BINARY SEARCH ALGORITHM CAN ONLY BE APPLIED ON SORTED SET OF NUMBERS

int binary_search_recursive(int key, int arr[],int n, int start, int end)
{
    int mid = start + (end-start)/2;
    if(start >= end) return -1;       // Base Case (Key is not present in the Array)
    if(key == arr[mid]) return mid;   // If key is found, Return its index
    // If key is greater than current element, go Right
    else if(key > arr[mid]) binary_search_recursive(key,arr,n,mid+1,end);
    // If key is lesser than current element, go Left
    else if(key < arr[mid]) binary_search_recursive(key,arr,n,start,mid-1);
    
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    cout<<"Recursive Binary Search for 4 : "<<binary_search_recursive(1,arr,5,0,4);
    // Binary Search Call for (Key,Array,Size of Array,Start, End)
}