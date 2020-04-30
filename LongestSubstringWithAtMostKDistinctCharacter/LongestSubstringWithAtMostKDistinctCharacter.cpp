#include<bits/stdc++.h>
using namespace std;

// Implement your solution here
int lengthOfLongestSubstringKDistinct(string s, int k) {
	int n = s.size();
    if(k == 0 || n == 0)
        return 0;

    int sp = 0, ep = 0, ans = 0;
    map<char, int> char_list;
    map<char, int>:: iterator itr;

    for(; ep < n; ep++)
    {
   // cout << "start of window " << sp << " end of window" << ep << "\n";
        itr = char_list.find(s[ep]);

        if(itr == char_list.end()){
     //       cout << "add " << s[ep] << "\n";
            char_list.insert({s[ep], 1});
        }
        else
            itr->second++;

      //      cout << "size = " << char_list.size() << "\n";
        while(char_list.size() > k)
        {
        //    cout << "\tok i am here ";
            itr = char_list.find(s[sp]);
          //  cout << itr->first << " " << itr->second << "\n";
            if(itr->second == 0){
                char_list.erase(itr);
                sp++;
            }
            else
                itr->second--;
        }
        ans = max(ans, ep-sp+1);
    }

    return ans;
}

int main()
{
	int n,k;
	cin >> n >> k;
	string s;
	cin >> s;
	int answer = lengthOfLongestSubstringKDistinct(s,k);
	cout <<  answer;
	return 0;
}
