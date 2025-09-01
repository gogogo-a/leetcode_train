#include <iostream>
using namespace std;
//双指针
class Solution {
    public:
        bool isSubsequence(string s, string t) {
            int n =t.size();
            int sl=0,tl=0;
            while (tl<n) {
                if (sl<s.size() && s[sl]==t[tl]){
                sl++;
                }
                tl++;
            
            }
            cout<<sl;
            cout<<" ";
            cout<<tl;
            if (s.size()==sl) {
                cout<<"true";
                return true;
            }
            return false;
        }
    };
int main(){
    Solution sol;
   string s = "axc", t = "ahbgdc";
   cout<<sol.isSubsequence(s, t);

}