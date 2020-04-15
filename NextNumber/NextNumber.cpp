#include<bits/stdc++.h>
using namespace std;
#define ll long long

// Implement the below functions
ll nextGreater(ll n)
{
    ll ans = 0;

    return ans;
}

ll nextSmaller(ll n)
{
    ll ans = 0;

    return ans;
}


int main()
{
    ll n;
    cin>>n;
    ll great=nextGreater(n);
    ll small=nextSmaller(n);
    cout<<great<<"\n";
    if(small==-1)
        cout<<"No Number\n";
    else
        cout<<small<<"\n";
}
