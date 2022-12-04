#include <vector>
#include <iostream>
using namespace std;

int maxSubArraySum(vector<int>&v)
{
    int maxx=v[0]; // Keep track of maximum sum uptil now
    int sum =0;
    for(auto it : v)
    {
        sum+=it; // Add current element to the sum
        maxx = max(maxx,sum); // Update maxx if possible
        if(sum<0) sum = 0; // When Sum becomes Negative , We start with a new Subarray
    }
    return maxx;
}
int main()
{
    vector<int>v = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSubArraySum(v);
}

// Time Complexity : O(N)
// Auxiliary Space : O(1)