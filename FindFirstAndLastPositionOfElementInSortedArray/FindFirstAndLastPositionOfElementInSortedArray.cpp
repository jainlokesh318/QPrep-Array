#include "FastIO.hpp"
#include "PrintMatrix.hpp"
#include "ReadMatrix.hpp"
#include <bits/stdc++.h>
using namespace std;

class FindFirstAndLastPositionOfElementInSortedArray {
  public:
    vector<int> searchRange(vector<int> nums, int target) {
        vector<int> v(2, -1);
        // TODO: CRIO_TASK_MODULE_L2_PROBLEMS
        // Your implementation goes here
        // CRIO_SOLUTION_START_MODULE_L2_PROBLEMS
        int n = nums.size();
        if (n == 0)
            return v;
        int lo = 0, hi = n - 1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == target) {
                v[0] = mid;
                v[1] = mid;
                int l = mid, r = hi;
                while (l <= r) {
                    int m = l + (r - l) / 2;
                    if (nums[m] == target) {
                        v[1] = m;
                        l = m + 1;
                    } else if (nums[m] < target) {
                        l = m + 1;
                    } else {
                        r = m - 1;
                    }
                }
                l = lo, r = mid;
                while (l <= r) {
                    int m = l + (r - l) / 2;
                    if (nums[m] == target) {
                        v[0] = m;
                        r = m - 1;
                    } else if (nums[m] < target) {
                        l = m + 1;
                    } else {
                        r = m - 1;
                    }
                }
                return v;
            } else if (nums[mid] < target) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        // CRIO_SOLUTION_END_MODULE_L2_PROBLEMS
        return v;
    }
};

int main() {
    FastIO();
    int n, target;
    cin >> n >> target;
    vector<int> nums;
    ReadMatrix<int>().OneDMatrix(n, nums);
    vector<int> result =
        FindFirstAndLastPositionOfElementInSortedArray().searchRange(nums,
                                                                     target);
    PrintMatrix<int>().OneDMatrix(result, " ");
    return 0;
}
