#include <iostream>
#include <string>
using namespace std;
bool is_vowel(char ch) {
    string vowels="aeiouAEIOU";
    return vowels.find(ch)!=string::npos;
   };
class Solution{
public:
    string reverseVowels(string s){
        int n =s.size();
        int i=0 ,j=n-1;
        while (i<j) {
        
        
        while (i<n && !is_vowel(s[i])){
            ++i;
        };
        while (j>0 && !is_vowel(s[j])) {
            --j;
        
        };
        if (i<j){
            swap(s[i],s[j]);
            ++i;
            --j;
        };

    };
    return s;
    };
};
int main(){
    Solution sol;
    string s="hello";
    cout<<sol.reverseVowels(s)<<endl;
};