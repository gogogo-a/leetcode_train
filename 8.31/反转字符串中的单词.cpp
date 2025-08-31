#include <iostream>
#include <string>
using namespace std;

class Solution{
    public:
    string reversewords(string s ){
        int n= s.size()-1;
        string res;
        while (s[n] == ' ' && n>0) {
            n--;
        };
        int m=n;
        while (n>=0) {
            while (n>=0 && s[n]!=' ') {
            n--;
            };
            res= res+s.substr(n+1,m-n)+" ";
            while (n>=0 && s[n]== ' ') {
                n--;
            };
            m=n;
        }
        return s.substr(0,res.size()-1); 
        

    };
};
class Solution2 {
    public:
        string reverseWords(string s) {
            // 使用双指针
            int m = s.size() - 1;
            string res;
            // 除去尾部空格
            while (s[m] == ' ' && m > 0) m--;
            int n = m; // n是另一个指针
            while (m >= 0) {
                while (m >= 0 && s[m] != ' ') m--;
                res += s.substr(m + 1, n - m) + " "; // 获取单词并加上空格
                while (m >= 0 && s[m] == ' ') m--;
                n = m;
            }
            return res.substr(0, res.size() - 1); // 忽略最后一位的空格
        }
    };

int main(){
    Solution sol;
    cout<<sol.reversewords("  hello world  ")<<endl;
    return 0;
};