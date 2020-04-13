#include<bits/stdc++.h>
using namespace std;

int countDistinct(int count[]) {
	int ans = 0;
	for(int i = 0 ; i < 256 ; i++) {
		ans += (count[i] >= 1);
	}
	return ans;
}

int lengthOfLongestSubstringKDistinct(string s, int k) {
	if(k == 0) {
		return 0;
	}
	int count[256];
	memset(count , 0 , sizeof count);
	int low = 0 , high = 0,ans = 0;
	while(high < s.size()) {
		if(countDistinct(count) > k) {
			count[s[low]]--;
			low++;
			continue;
		}
		count[s[high]]++;
		if(countDistinct(count) <= k) {
			ans = max(ans,high-low+1);
			high++;
		} else {
			count[s[low]]--;
			low++;
			high++;
		}
	}	
	return ans;
}

int main()
{
	int n,k;
	cin >> n >> k;
	string s;
	cin >> s;
	int answer = lengthOfLongestSubstringKDistinct(s,k);
	cout <<  answer;
	return 0;
}
