#include <bits/stdc++.h>
#include "../crio/cpp/io/FastIO.hpp"
#include "../crio/cpp/io/ReadMatrix.hpp"

using namespace std;

class ThreeSum {
public:
    // Implement your solution here	

    void twoSum(vector<int> nums, int req, int fp, set< vector<int> > &res)
{
    int sp = nums.size()-1;
    int cur;
    while(fp < sp)
    {
        cur = nums[fp] + nums[sp];
        if(cur == req)
        {
     //       cout << "\t" << -req << " " << nums[fp] << " " << nums[sp] << "\n";
            vector<int> trip = {-req, nums[fp], nums[sp]};
            sort(trip.begin(), trip.end());
            res.insert(trip);
            fp++;
            sp--;
            while(nums[fp] == nums[fp-1] && fp < sp)
                fp++;
            while(nums[sp] == nums[sp+1] && fp < sp)
                sp++;
        }
        else if(cur < req)
            fp++;
        else
            sp++;
    }
}

    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        
        set<vector<int>> res;
        for(int i = 0; i < (int)nums.size()-2; i++)
        {
            // cout << "For " << i << "\n";
            if(i > 0 && nums[i] == nums[i-1])
                continue;
            twoSum(nums, -nums[i], i+1, res);
        }

        for(vector<int> x : res)
            ans.push_back(x);
            
        return ans;
    }
};

int main() {
    FastIO();
    int n;
    cin >> n;
    vector<int> nums;
    ReadMatrix<int>().OneDMatrix(n, nums);

    vector<vector<int>> result = ThreeSum().threeSum(nums);
    for (unsigned int i = 0; i < result.size(); i++) {
        cout << result[i][0] << " " << result[i][1] << " " << result[i][2]; 
        cout << endl; 
    }
    return 0;
}
