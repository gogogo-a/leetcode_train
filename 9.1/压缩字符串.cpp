#include <iostream>
#include <string>
#include <vector>
//双指针
using namespace std;
class Solution {
    public:
        int  compress(vector<char>& chars) {
            int w=0;   
         
            for(int r=0;r<chars.size();){
                int cont=0;
                char s=chars[r];
                while (r<chars.size() && s==chars[r] ) {
                     r++;
                    cont++;
                }
                chars[w++]=s;
                if (cont>1) {
                string m=to_string(cont);
                for (char c : m){
                    chars[w++]=c;               
                 }
                }
            }
            return w;
        };
    };
int main(){
    Solution sol;
    // 使用构造函数初始化vector，而不是初始化列表
    vector<char> chars;
    chars.push_back('a');
    chars.push_back('a');
    chars.push_back('b');
    chars.push_back('b');
    chars.push_back('c');
    chars.push_back('c');
    chars.push_back('c');

    cout << sol.compress(chars) << endl;
}