#include <bits/stdc++.h>
#include "../crio/cpp/io/FastIO.hpp"
#include "../crio/cpp/io/ReadMatrix.hpp"

using namespace std;

class ThreeSum {
public:
    // Implement your solution here	
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;

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
