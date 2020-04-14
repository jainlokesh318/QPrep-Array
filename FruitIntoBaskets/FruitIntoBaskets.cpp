#include<bits/stdc++.h>
using namespace std;

// Implement your solution here
int totalFruit(vector<int>& tree) {
	int ans = 0;

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
