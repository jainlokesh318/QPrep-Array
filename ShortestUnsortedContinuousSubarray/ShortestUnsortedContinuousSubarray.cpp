#include<bits/stdc++.h>
using namespace std;

// Implement your solution here
int findUnsortedSubarray(vector<int>& nums) { 

	int fp = 0, sp = 0;

    for(int i = 1; i < (int)nums.size(); i++)
    {
        if(nums[i] < nums[i-1])
        {
        //cout << "Start miasmatch at " << i-1 << " i.e " << nums[i-1] << "\n";
            fp = i-1;
            break;
        }
    }

    for(int i = nums.size()-1 ; i > 0; i--)
    {
        if(nums[i] < nums[i-1])
        {
        //cout << "End mismatch at " << i << " i.e " << nums[i] << "\n";
            sp = i;
            break;
        }
    }

    int mini = INT_MAX, maxi = INT_MIN;
    for(int i = fp; i <= sp; i++)
    {
        if(nums[i] < mini)
            mini = nums[i];
        if(nums[i] > maxi)
            maxi = nums[i];
    }

    for(int i = 0; i < fp; i++)
    {
        if(nums[i] > mini){
            fp = i;
            break;
        }
    }

    for(int i = nums.size()-1; i > sp; i--)
    {
        if(nums[i] < maxi){
            sp = i;
            break;
        }
    }
    //cout << fp << " " << sp << "\n";

    if(sp == 0 && fp == 0)
        return 0;
    return sp-fp+1;
}

int main()
{
	int n;
	cin >> n;
	vector<int>nums(n);
	for(int i = 0 ; i < n ; i++) {
		cin >> nums[i];
	}
	int answer = findUnsortedSubarray(nums);
	cout << answer << "\n";
	return 0;	
}
