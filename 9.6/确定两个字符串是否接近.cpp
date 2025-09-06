#include <algorithm>
#include <iostream>
#include <memory>
#include <numeric>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;
//hashmap
class Solution {
    public:
        bool closeStrings(string word1, string word2) {
            unordered_map<char, int> map1;
            unordered_map<char, int> map2;
            int n1=word1.size();
            int n2=word2.size();
            if (n1!=n2) {
                return false;
            
            }
            for (int i=0; i<n1; i++) {
                map1[word1[i]]++;
            }
            for (int i=0; i<n2; i++) {
                map2[word2[i]]++;
            }
            unordered_set<char> set1char;
            unordered_map<int,int> map1int;
            for (auto const&[key,val]:map1) {
                set1char.insert(key);
                map1int[val]++;
            }
            for (auto const&[key,val]:map2) {
                if (!set1char.count(key)) {
                    return false;
                }
                if (map1int[val]<=0) {
                    return false;
                }
                if (map1int[val]) {
                    map1int[val]--;
                
                }
              
            }
            return true;
        }
    };