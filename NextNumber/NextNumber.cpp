#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> convertToBinary(ll n)
{
    ll r,num=n;
    vector<int> vec;
    while(num!=0)
    {
        r=num%2;
        num/=2;
        vec.push_back(r);
    }
    return vec;
}

// Implement the below functions
ll nextGreater(vector<int> vec)
{
    ll ans = 0;

    return ans;
}
ll nextSmaller(vector<int> vec)
{
    ll ans = 0;

    return ans;
}


int main()
{
    ll n;
    cin>>n;
    vector<int> vec = convertToBinary(n);
    ll great=nextGreater(vec);
    ll small=nextSmaller(vec);
    cout<<great<<"\n";
    if(small==-1)
        cout<<"No Number\n";
    else
        cout<<small<<"\n";
}
