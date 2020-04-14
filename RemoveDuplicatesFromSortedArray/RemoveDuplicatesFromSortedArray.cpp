#include <bits/stdc++.h>
#include "../crio/cpp/io/FastIO.hpp"
#include "../crio/cpp/io/ReadMatrix.hpp"

using namespace std;

class RemoveDuplicatesFromSortedArray {
public:
    // Implement your solution here	
    int removeDuplicates(vector<int>& nums) {
        int ans = 0;

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
