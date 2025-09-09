#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <memory>
#include <numeric>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <cctype> 
using namespace std;
//栈的嵌套
class Solution {
    public:
        string decodeString(string s) {
            string res="";
            vector<int> numstack;
            vector<string> strstack;
            int n=0;
            for (char c : s) {
                if (isdigit(c)) {
                    n=n*10+(c-'0');
                }else if (c=='[') {
                    numstack.push_back(n);
                    strstack.push_back(res);
                    n=0;
                    res="";
                }else if (c==']') {
                    int rn=numstack.back();
                    numstack.pop_back();
                    string prestr=strstack.back();
                    strstack.pop_back();
                    string tem="";
                    for (int i=0;i<rn;i++) {
                        tem+=res;
                    }
                    res=prestr+tem;
                    

                }else {
                    res += c;

                }
            }
            return res;
        }
    };
int main(){
    Solution sol;
    string s = "3[a2[c]]";
    cout<< sol.decodeString(s);
}