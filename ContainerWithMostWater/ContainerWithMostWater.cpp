#include "../crio/cpp/io/FastIO.hpp"
#include "../crio/cpp/io/PrintMatrix.hpp"
#include "../crio/cpp/io/ReadMatrix.hpp"
#include <bits/stdc++.h>
using namespace std;

class ContainerWithMostWater {
  public:
    
    int maxArea(vector<int> &nums)
{
    int ans = INT_MIN;
    for(int i = 0; i < (int)nums.size()-1; i++)
    {
        for(int j = i+1; j < (int)nums.size(); j++)
        {
            int curr = min(nums[i], nums[j])*(j-i);
            ans = max(ans, curr);
        }
    }
    return ans;
}
};

int main() {
    FastIO();
    int n;
    cin >> n;
    vector<int> height;
    ReadMatrix<int>().OneDMatrix(n, height);
    int result = ContainerWithMostWater().maxArea(height);
    cout << result;
    return 0;
}
