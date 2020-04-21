#include <bits/stdc++.h>
#include "solution.cpp"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int r,c;
    cin>>r>>c;
    vector<vector<long long>  > matrix(r, vector<long long >(c,0));
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cin>>matrix[i][j];
    }
    int q;
    cin>>q;
    while(q--)
    {
        long long target;
        cin>>target;
        bool result  = solve().answer(matrix, target);
        if(result)
            cout<<"true"<<"\n";
        else
            cout<<"false\n";
    }
    return 0;
}
