#include<bits/stdc++.h>
using namespace std;

// Implement your solution here
int totalFruit(vector<int>& s) {
	int k = 2;
	int n = s.size();
    if(k == 0 || n == 0)
        return 0;

    int l = 0, r = 0, ans = 0, cnt = 0;
    vector<int> mapi(256, 0);

    for(; r < n; r++)
    {
   // cout << "start of window " << sp << " end of window" << ep << "\n";
        if(mapi[s[r]] == 0)
            cnt++;
        mapi[s[r]]++;

      //      cout << "size = " << char_list.size() << "\n";
        while(cnt > k)
        {
        //    cout << "\tok i am here ";
            mapi[s[l]]--;
          //  cout << itr->first << " " << itr->second << "\n";
            if(mapi[s[l]] == 0) cnt--;
            l++;
        }
		if(cnt == k)
       	 ans = max(ans, r-l+1);
    }

    return ans;
}

int main()
{
	int n;
	cin >> n;
	vector<int>tree(n);
	for(int i = 0 ; i < n ; i++) {
		cin >> tree[i];
	}
	int answer = totalFruit(tree);
	cout << answer;
	return 0;
}
