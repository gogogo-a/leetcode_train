#include <iostream>
#include <numeric>
#include <string>
#include <vector>
using namespace std;
//滑动窗口
class Solution {
    public:
    bool isv(char s){
        string v="aeiou";
        return v.find(s)!=string::npos;
    }
        int maxVowels(string s, int k) {
            int n=s.size();
            int res=0;
            for (int i=0; i<k; i++) {
                if (isv(s[i])) {
                    res++;
                }
            }
            int maxres=res;
            for (int i=k; i<n; i++) {
                if (isv(s[i-k])) {
                    res--;
                }
                if (isv(s[i])) {
                    res++;
                }
                maxres=max(maxres,res);
            
            }
            return maxres;
        }
    };