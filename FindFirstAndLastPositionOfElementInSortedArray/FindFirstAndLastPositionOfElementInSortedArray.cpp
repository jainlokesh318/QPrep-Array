#include <bits/stdc++.h>
#include "solution.cpp"
using namespace std;

int main() {
    
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0 ; i < n ; i++) {
        cin >> nums[i];
    }
    int q;
    cin >> q;
    for(int i = 0 ;i < q ; i++) {
        int target;
        cin >> target;
        vector<int> result = solution().searchRange(nums,target);
        cout << result[0] << " " << result[1] << "\n";
    }
    return 0;
}
