#include <bits/stdc++.h>
#include "../crio/cpp/io/FastIO.hpp"
#include "../crio/cpp/io/ReadMatrix.hpp"

using namespace std;

class ThreeSum {
public:
    // Implement your solution here	

    vector<vector<int> > threeSum(vector<int>& nums)
{
    vector<vector<int> > ans;
    if(nums.size() <= 2)
        return ans;

    sort(nums.begin(), nums.end());
    for(int i = 0; i < (int)nums.size()-2; i++)
    {
        if (i != 0 && nums[i] == nums[i-1]) continue;
        int l = i+1, r = nums.size()-1;
        while(l < r)
        {
            int sum = nums[i]+nums[l]+nums[r];
            if(sum == 0)
            {
                ans.push_back({nums[i], nums[l], nums[r]});
                l++;
                r--;
                while(l<r && nums[l] == nums[l-1]) l++;
                while(l<r && nums[r] == nums[r+1]) r--;
            }
            else if(sum < 0) l++;
            else r--;
        }
    }
    return ans;
}
};

int main() {
    FastIO();
    int n;
    cin >> n;
    vector<int> nums;
    ReadMatrix<int>().OneDMatrix(n, nums);

    vector<vector<int> > result = ThreeSum().threeSum(nums);
    for (unsigned int i = 0; i < result.size(); i++) {
        cout << result[i][0] << " " << result[i][1] << " " << result[i][2]; 
        cout << endl; 
    }
    return 0;
}
