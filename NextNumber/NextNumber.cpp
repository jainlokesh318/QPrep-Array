#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll setBit(ll num, int bitNumber)
{
    return num |= ((ll)1 << bitNumber);
}

ll clearAllLowerBits(ll num, int bitNumber)
{
    num &= ~(((ll)1 << bitNumber)-1);
    return num;
}

ll insertOneBitAtLowerEnd(ll num, int numberOfBit)
{
    num |= ((ll)1 << numberOfBit)-1;
    return num;
}

ll insertOneBitAtPos(ll num, int numBit, int bitNumber)
{
    ll mask = ((ll)1 << numBit)-1;
    num |= mask << bitNumber;
    return num;
}

// Implement the below functions
ll nextGreater(ll n)
{
     int zeroBit = 0, oneBit = 0;

    ll temp = n;
    while(((temp & 1) == 0)  && (temp != 0))
    {
        zeroBit++;
        temp >>= 1;
    }

    while((temp & 1) == 1)
    {
        oneBit++;
        temp >>= 1;
    }

    if((oneBit + zeroBit == 63) || oneBit + zeroBit == 0)
        return -1;

    int zeroPos = zeroBit + oneBit;
    n = setBit(n, zeroPos);
    n = clearAllLowerBits(n, zeroPos);
    n = insertOneBitAtLowerEnd(n, oneBit-1);

    return n;
}

ll nextSmaller(ll n)
{
    int zeroBit = 0, oneBit = 0;

    ll temp = n;

    while((temp & 1) == 1){
        oneBit++;
        temp = temp >> 1;
    }

    if(temp == 0)
        return -1;

    while(((temp & 1) == 0) && (temp != 0)){
        zeroBit++;
        temp = temp >> 1;
    }

    int oneBitPos = oneBit + zeroBit;
    n = clearAllLowerBits(n, oneBitPos+1);
    n = insertOneBitAtPos(n, oneBit+1, zeroBit-1);

    return n;
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
