#include "../crio/cpp/io/FastIO.hpp"
#include <bits/stdc++.h>
using namespace std;

// Your implementation goes here
class LongestSubstringWithoutRepeatingCharacter {
  public:
    int lengthOfLongestSubstring(string s) {
        int longestSubstring = 0;

        return longestSubstring;
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
