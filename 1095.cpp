#include<bits/stdc++.h>
using namespace std;
#define ll long long
class MountainArray {
  public:
    int get(int index);
    void set(int index, int value);
    int length();
};
//kunal?
class Solution
{
public:
    map<int,int> mounthash;
    int getMountVal(int index)
    {
        if()
    }
    int findInMountainArray(int target, MountainArray &mountainArr)
    {


        int n=mountainArr.length();
        int low = 0, high = n - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;

            // if mid points the target
            if (mountainArr.get(mid) == target)
                return mid;

            // Edge case:
            if (mountainArr.get(mid)  == mountainArr.get(mid)  && mountainArr.get(mid)  == mountainArr.get(mid) )
            {
                low = low + 1;
                high = high - 1;
                continue;
            }

            // if left part is sorted:
            if (mountainArr.get(mid)  <= mountainArr.get(mid) )
            {
                if (mountainArr.get(mid)  <= target && target <= mountainArr.get(mid) )
                {
                    // element exists:
                    high = mid - 1;
                }
                else
                {
                    // element does not exist:
                    low = mid + 1;
                }
            }
            else
            { // if right part is sorted:
                if (mountainArr.get(mid)  <= target && target <= mountainArr.get(mid) )
                {
                    // element exists:
                    low = mid + 1;
                }
                else
                {
                    // element does not exist:
                    high = mid - 1;
                }
            }
        }
        return -1;
        }
        
    };
int main()
{
    MountainArray mountainArr;
    int len=6;
    for (int i = 0; i < len; i++)
    {
        int x;
        cin>>x;
        mountainArr.set(i, x);
    }
    Solution s;
    cout<<s.findInMountainArray(3,mountainArr);
    
return 0;
}