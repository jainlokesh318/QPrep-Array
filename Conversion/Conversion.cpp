#include<bits/stdc++.h>
using namespace std;

// Implement your solution here
int countConversionBits(long long a,long long b) {
	return __builtin_popcount(a^b);
}

int main() {
	long long a , b;
	cin >> a >> b;
	int answer = countConversionBits(a,b);
	cout << answer;
	return 0;
}
