#include<bits/stdc++.h>
using namespace std;

int countConversionBits(long long a,long long b) {
	long long xorr = a^b;
	int result = __builtin_popcountll(xorr);
	return result;
}

int main() {
	long long a , b;
	cin >> a >> b;
	int answer = countConversionBits(a,b);
	cout << answer;
	return 0;
}
