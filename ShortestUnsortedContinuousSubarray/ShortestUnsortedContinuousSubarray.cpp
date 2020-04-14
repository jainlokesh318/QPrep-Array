#include<bits/stdc++.h>
using namespace std;

// Implement your solution here
int findUnsortedSubarray(vector<int>& nums) { 

	return 0;
}

int main()
{
	int n;
	cin >> n;
	vector<int>nums(n);
	for(int i = 0 ; i < n ; i++) {
		cin >> nums[i];
	}
	int answer = findUnsortedSubarray(nums);
	cout << answer << "\n";
	return 0;	
}
