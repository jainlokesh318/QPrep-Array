#include "FastIO.hpp"
#include "PrintMatrix.hpp"
#include "ReadMatrix.hpp"
#include <bits/stdc++.h>
using namespace std;

class SearchInRotatedSortedArray {
  public:
    // Implement your solution here	  
    int search(vector<int>& nums, int target) {

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
