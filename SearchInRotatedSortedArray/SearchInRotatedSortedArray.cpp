#include "../crio/cpp/io/FastIO.hpp"
#include "../crio/cpp/io/PrintMatrix.hpp"
#include "../crio/cpp/io/ReadMatrix.hpp"
#include <bits/stdc++.h>
using namespace std;

class SearchInRotatedSortedArray {
  public:
    // Implement your solution here	  
    int search(vector<int>& nums, int target) {

         int first = 0, last = nums.size()-1;
        while(first <= last)
        {
            int mid = first + (last - first) / 2;
            
            if(nums[mid] == target)
                return mid;
            
            if(nums[first] <= nums[mid])
            {
                if(target >= nums[first] && target < nums[mid])
                    last = mid-1;
                else
                    first = mid+1;
            }
            else
            {
                if(target > nums[mid] && target <= nums[last])
                    first = mid+1;
                else
                    last = mid-1;
            }
        }
        return -1;
    }
};

int main() {
    FastIO();
    int n;
    cin >> n;
    vector<int> nums;
    ReadMatrix<int>().OneDMatrix(n, nums);

    int queries;
    cin >> queries;
    for (int i = 0; i < queries; i++) {
        int target;
        cin >> target;
        int result = SearchInRotatedSortedArray().search(nums, target);
        cout << result << "\n";
    }

    return 0;
}
