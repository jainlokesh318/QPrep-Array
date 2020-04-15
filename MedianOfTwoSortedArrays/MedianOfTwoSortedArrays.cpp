#include<bits/stdc++.h>
using namespace std;

// Implement your solution here
double findMedianOfTwoSortedArrays(vector<int>& nums1, vector<int>& nums2) { 

	return 0.0;
}

int main()
{
	int m, n;
	cin >> m >> n;
	vector<int>nums1(m);
	for(int i = 0 ; i < m ; i++) {
		cin >> nums1[i];
	}
	vector<int>nums2(n);
	for(int i = 0 ; i < n ; i++) {
		cin >> nums2[i];
	}
	double answer = findMedianOfTwoSortedArrays(nums1, nums2);
	cout << answer << "\n";
	return 0;
}
