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
    int i = 0, j = nums.size()-1;
    while(i != j)
    {
        int curr = min(nums[i], nums[j])*(j-i);
        //cout << curr << "\n";
        ans = max(curr, ans);
        if(nums[j] > nums[i])
            i++;
        else
            j--;
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
