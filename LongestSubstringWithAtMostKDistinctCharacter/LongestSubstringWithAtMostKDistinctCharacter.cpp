#include<bits/stdc++.h>
using namespace std;

// Implement your solution here
int lengthOfLongestSubstringKDistinct(string s, int k) {
	int n = s.size();
    if(k == 0 || n == 0)
        return 0;

    int l = 0, r = 0, ans = 0, cnt = 0;
    vector<int> mapi(256, 0);

    for(; r < n; r++)
    {
        if(mapi[s[r]] == 0)
            cnt++;
        mapi[s[r]]++;

        while(cnt > k)
        {
            mapi[s[l]]--;
            if(mapi[s[l]] == 0) cnt--;
            l++;
        }
        ans = max(ans, r-l+1);
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
