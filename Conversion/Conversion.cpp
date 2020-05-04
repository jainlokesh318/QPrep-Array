#include<bits/stdc++.h>
using namespace std;

// Implement your solution here

int countBits(long long a)
{
    int cnt = 0;

    while(a > 0)
    {
        if(a&1)
            cnt++;
        a = a >> 1;
    }
    return cnt;
}


int main() {
	long long a , b;
	cin >> a >> b;
	int answer = countBits(a^b);
	cout << answer;
	return 0;
}
