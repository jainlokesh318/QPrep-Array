#include<bits/stdc++.h>
using namespace std;

// Implement your solution here
vector<int> findAnagrams(string s, string p) {
	vector<int>ans;

	return ans;
}

int main()
{
	string s,p;
	cin >> s >> p;
	vector<int> answer = findAnagrams(s,p);
	cout << answer.size() << "\n";
	for(int i = 0 ; i < answer.size() ; i++) {
		cout << answer[i] << " ";
	}
	return 0;
}
