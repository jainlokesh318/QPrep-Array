#include<bits/stdc++.h>
using namespace std;

unsigned int swapAllOddAndEvenBits(unsigned int n) {
	for(int i = 0 ; i < 32 ; i+=2) {
		if((((n >> i)&1)^(n >> (i+1))&1) == 1) {
			n ^= (1 << i);
			n ^= (1 << (i+1));
		}
	}
	return n;
}

int main()
{
	unsigned int n;
	cin >> n;
	unsigned int answer = swapAllOddAndEvenBits(n);
	cout << answer;
	return 0;
}
