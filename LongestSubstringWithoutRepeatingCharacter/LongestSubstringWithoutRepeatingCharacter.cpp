#include "../crio/cpp/io/FastIO.hpp"
#include <bits/stdc++.h>
using namespace std;

// Your implementation goes here
class LongestSubstringWithoutRepeatingCharacter {
  public:
    int lengthOfLongestSubstring(string s) {
         int n = s.size(), p = 0, ans = 0;
    set<char> occ;
    set<char>::iterator itr;

    for(int i = 0; i < n; i++)
    {
        itr = occ.find(s[i]);
        while(itr != occ.end())
        {
            occ.erase(s[p]);
            p++;
            itr = occ.find(s[i]);
        }

        occ.insert(s[i]);
        ans = max(ans, (int)occ.size());
    }
    return ans;
    }
};

int main() {
    FastIO();
    string s;
    getline(cin, s);
    int result =
        LongestSubstringWithoutRepeatingCharacter().lengthOfLongestSubstring(s);
    cout << result;
    return 0;
}
