
#include <bits/stdc++.h>
#include <unordered_map>

class Solution {
  public:
    int romanToInt(std::string s) {
        std::pmr::unordered_map<char, int> roman = {
            {'I', 1},   {'V', 5},   {'X', 10},  {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}};

        int temp = 0;

        for (std::size_t i = 0; i < s.size() - 1; i++) {
            if (roman[s[i]] < roman[s[i + 1]]) {
                temp -= roman[s[i]];
            } else {
                temp += roman[s[i]];
            }
        }
        return temp + roman[s[s.size() - 1]];
    }
};
