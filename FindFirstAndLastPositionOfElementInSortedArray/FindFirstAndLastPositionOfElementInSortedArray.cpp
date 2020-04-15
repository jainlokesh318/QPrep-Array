#include "../crio/cpp/io/FastIO.hpp"
#include "../crio/cpp/io/PrintMatrix.hpp"
#include "../crio/cpp/io/ReadMatrix.hpp"
#include <bits/stdc++.h>
using namespace std;

class FindFirstAndLastPositionOfElementInSortedArray {
  public:
    vector<int> searchRange(vector<int> nums, int target) {
        vector<int> v(2, -1);
        // Your implementation goes here
	
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
