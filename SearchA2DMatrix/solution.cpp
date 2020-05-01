#include <bits/stdc++.h>
using namespace std;

class solve{
public:
    // Implement your solution here
    bool searchInMatrixCol(vector<vector<long long > > &mat, int l, int r, long long target)
{
    int i = l;
    while(l <= r)
    {
        int m = l + (r-l)/2;

        if(mat[i][m] == target)
            return true;

        if(mat[i][m] < target)
            l = m+1;
        else
            r = m-1;
    }
    return false;
}

bool searchInMatrixRow(vector<vector<long long> > &mat, int l, int r, long long target)
{
    int i = l;
    while(l <= r)
    {
        int m = l + (r-l)/2;

        if(mat[m][i] == target)
            return true;

        if(mat[m][i] < target)
            l = m+1;
        else
            r = m-1;
    }
    return false;
}
    bool answer(vector<vector<long long > > &mat , long long target)
    {
        
    int n = mat.size();
    if(n == 0)
        return false;

    int m = mat[0].size();


    int z = min(n, m);

    for(int i = 0; i < z; i++)
    {
        if(searchInMatrixCol(mat, i, m-1, target))
            return true;
        else  if(searchInMatrixRow(mat, i, n-1, target))
            return true;
    }
    return false;
    }

};
