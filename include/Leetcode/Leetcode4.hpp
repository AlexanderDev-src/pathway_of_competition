#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

class Solution {
  public:
    int lengthOfLongestSubstring(string s) {
        int len = s.length();

        int max_length = 0;
        vector<int> charIndex(128, -1);
        int left = 0;

        for (int right = 0; right < len; right++) {
            if (charIndex[s[right]] >= left) {
                left = charIndex[s[right]] + 1;
            }
            charIndex[s[right]] = right;
            max_length = max(max_length, right - left + 1);
        }

        return max_length;
    }
};
