#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> convertToBinary(ll n)
{
    ll flag=0,r,num=n;
    vector<int> vec;
    while(num!=0)
    {
        r=num%2;
        num/=2;
        vec.push_back(r);
    }
    return vec;
}
ll nextGreater(vector<int> vec)
{
    vec.push_back(0);
    ll flag=0,ans=0;
    for(ll i=0;i<vec.size();i++)
    {
        if(vec[i]==1)
            flag=1;
        if(vec[i]==0 && flag==1)
        {
            vec[i]=1;
            vec[i-1]=0;
            break;
        }
    }
    if(vec[vec.size()-1]==1)
    {
        ll val=0;
        for(ll i=0;i<vec.size();i++)
        {
            if(vec[i]==1)
                val++;
        }
        ans+= (1ll<<(vec.size()-1));
        for(ll i=0;i<val-1;i++)
            ans+= (1ll<<i);
    }
    else
    {
        for(ll i=0;i<vec.size();i++)
        {
            if(vec[i]==1)
                ans+= (1ll<<i);
        }
    }
    return ans;
}
ll nextSmaller(vector<int> vec)
{
    ll flag=0,ans=0,temp;
    for(ll i=0;i<vec.size();i++)
    {
        if(vec[i]==0)
            flag=1;
        if(vec[i]==1 && flag==1)
        {
            vec[i]=0;
            vec[i-1]=1;
            temp=i-1;
            break;
        }
    }
    if(flag==0)
        return -1;
    else
    {
        ll oneval=0;
        for(ll i=temp-1;i>=0;i--)
        {
            if(vec[i]==1)
                oneval++;
        }
        for(ll i=temp-1;i>=0;i--)
        {
            if(oneval>0)
            {
                 vec[i]=1;
                 oneval--;
            }
            else
                vec[i]=0;
        }
        for(ll i=0;i<vec.size();i++)
        {
            if(vec[i]==1)
                ans+= (1ll<<i);
        }
        return ans;
    }

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
