#include <iostream>
#include <vector>
using namespace std;


void dutchNationalFlag(vector<int>&v)
{
    int low = 0;
    int mid = 0;
    int high = v.size()-1;

// 0 to low-1  => 0
// low to mid-1  => 1
// mid to high => 2

    while(mid<=high)
    {
        if(v[mid]==0)
        {
            swap(v[low],v[mid]);
            low++;
            mid++;
        }
        else if(v[mid]==1)
        {
            mid++;
        }
        else if(v[mid]==2)
        {
            swap(v[mid],v[high]);
            high--;
        }
    }
}
int main()
{
    vector<int>v = {0,1,2,0,1,2};
    dutchNationalFlag(v);
    for(auto i : v) cout<<i<<" ";
}