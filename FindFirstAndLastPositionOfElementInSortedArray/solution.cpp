#include <bits/stdc++.h>
using namespace std;

class solution {
    public:
        int fir(vector<int> &v, int target)
{
    int first = -1;
    int l = 0, r = v.size();
    
    while(l < r)
    {
        int mid = l + (r-l)/2;
        if(v[mid] == target)
        {
            first = mid;
            r = mid;
        }
        
        else if(v[mid] < target)
            l = mid+1;
        else
            r = mid;
    }
    return first;
}

int las(vector<int> &v, int target)
{
    int last = -1;
    int l = 0, r = v.size();
    
    while(l < r)
    {
        int mid = l + (r-l)/2;
        if(v[mid] == target)
        {
            last = mid;
            l = mid+1;
        }
        
        else if(v[mid] < target)
            l = mid+1;
        else
            r = mid;
    }
    
    return last;
}
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
       
        int left = fir(nums, target);
        int right = las(nums, target);
        vector <int> result;
        result.push_back(left);
        result.push_back(right);
        
        return result;
        
    }
};
