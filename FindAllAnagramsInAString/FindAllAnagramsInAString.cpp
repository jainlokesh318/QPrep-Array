#include<bits/stdc++.h>
using namespace std;

// Implement your solution here
vector<int> findAnagrams(string s, string p) {
	vector<int> res;
    int n = s.size();
    int m = p.size();

    if(n < m || n == 0)
        return res;

    map<char, int> mp, pat;
    map<char, int>:: iterator itr;
    for(int i = 0; i < m; i++)
    {
        itr = pat.find(p[i]);
        if(itr != pat.end())
            itr->second++;
        else
            pat.insert({p[i], 1});

        itr = mp.find(s[i]);
        if(itr != mp.end())
            itr->second++;
        else
            mp.insert({s[i], 1});
    }

    int sp = m-1;
    for(int i = 0; i <= n-m ; i++)
    {
   /* cout << "here at " << i << "\n";
      for(itr = mp.begin(); itr != mp.end(); itr++)
        cout << itr->first << " " << itr->second << "\n";
    cout << "-------------------------------------\n";
    for(itr = pat.begin(); itr != pat.end(); itr++)
        cout << itr->first << " " << itr->second << "\n";*/
        if(mp == pat){
            //cout << "pushing " << i << "\n";
            res.push_back(i);
        }
        itr = mp.find(s[i]);
        itr->second--;
        if(itr->second == 0)
            mp.erase(itr);

        sp++;
        itr = mp.find(s[sp]);
        if(itr != mp.end())
            itr->second++;
        else{
            //cout << "tana \n";
            mp.insert({s[sp], 1});
        }
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
