#include<bits/stdc++.h>
using namespace std;

// Implement your solution here
vector<int> findAnagrams(string s, string p) {
	
    vector<int> res;
    int n = s.size();
    int m = p.size();

    if(n < m || n == 0)
        return res;

    sort(p.begin(), p.end());
    for(int i = 0; i <= n-m ; i++)
    {
        string x = s.substr(i, m);
        sort(x.begin(), x.end());

        if(x == p)
            res.push_back(i);
    }
    return res;
}

int main()
{
	string s,p;
	cin >> s >> p;
	vector<int> answer = findAnagrams(s,p);
	cout << answer.size() << "\n";
	for(unsigned int i = 0 ; i < answer.size() ; i++) {
		cout << answer[i] << " ";
	}
	return 0;
}
