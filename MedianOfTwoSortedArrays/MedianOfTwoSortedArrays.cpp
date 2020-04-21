#include<bits/stdc++.h>
using namespace std;

// Implement your solution here
double findMedianOfTwoSortedArrays(vector<int>& nums1, vector<int>& nums2, int size1, int size2) { 

	return 0.0;
}

int main()
{
	int m, n, q, size1, size2;
	cin >> m;
	vector<int>nums1(m);
	for(int i = 0 ; i < m ; i++) {
		cin >> nums1[i];
	}
	cin >> n;
	vector<int>nums2(n);
	for(int i = 0 ; i < n ; i++) {
		cin >> nums2[i];
	}
	cin >> q;
        for (int i = 0; i < q ; i++) {
	    cin >> size1;
	    cin >> size2;
	    double answer = findMedianOfTwoSortedArrays(nums1, nums2, size1, size2);
	    cout << answer << "\n";
	}
	return 0;
}
