#include <bits/stdc++.h>
#include "../crio/cpp/io/FastIO.hpp"
#include "../crio/cpp/io/ReadMatrix.hpp"

using namespace std;

class RemoveDuplicatesFromSortedArray {
public:
    // Implement your solution here	
   int removeDuplicates(vector<int> &nums)
{
    int ans = 0;
    int n = nums.size();
    if(n == 0)
        return 0;
    int i = 0;
    for(int j = 0; j < n; j++)
    {
        if(nums[i] != nums[j])
            i = j;
        if(i == j)
            ans++;
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
    int result = RemoveDuplicatesFromSortedArray().removeDuplicates(nums);
    cout << result;
	return 0;
}
