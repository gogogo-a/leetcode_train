#include <algorithm>
#include <iostream>
#include <memory>
#include <numeric>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;
//双指针
class Solution {
    public:
        string removeStars(string s) {
            int l=0,r=1;
            int n=s.size();
            if (n==1) {
                if (s[l]=='*') {
                return "";
                }
                return s;
            }
            while (r<n) {
                if (s[r]=='*') {
                    s.erase(r,1);
                    s.erase(l,1);
                    r--;
                    l--;
                }
                else {
                    r++;
                    l++;
                }
                n=s.size();
            }
            return s;
        }
    };

//模拟
class Solution1 {
    public:
        string removeStars(string s) {
            string res;
            for (char c : s) {
                if (c == '*') {
                    res.pop_back();
                } else {
                    res += c;
                }
            }
            return res;
        }
    };
    
