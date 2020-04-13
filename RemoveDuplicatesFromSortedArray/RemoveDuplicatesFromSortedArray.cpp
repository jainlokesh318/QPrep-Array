#include <bits/stdc++.h>
#include "../crio/cpp/io/FastIO.hpp"
#include "../crio/cpp/io/ReadMatrix.hpp"

using namespace std;

class RemoveDuplicatesFromSortedArray {
public:
    int removeDuplicates(vector<int>& nums) {
        int ans = 0;
        // CRIO_SOLUTION_START_MODULE_REMOVE_DUPLICATES_FROM_SORTED_ARRAY
        int n = nums.size();
        for(int i = 0; i < n; ) {
            int x = nums[i];
            nums[ans++] = nums[i++];
            while(i < n && nums[i] == x) {
                i++;
            }
        }
        // CRIO_SOLUTION_END_MODULE_REMOVE_DUPLICATES_FROM_SORTED_ARRAY
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
