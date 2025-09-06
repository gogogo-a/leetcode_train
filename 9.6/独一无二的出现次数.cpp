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
        bool uniqueOccurrences(vector<int>& arr) {
            unordered_map<int,int> map;
            int n=arr.size();
            for (int i=0; i<n; i++) {
                map[arr[i]]++;
            }
            unordered_set<int>set;
            for (auto const& [key,val]:map ) {
                if(set.count(val)){
                    return false;
                }
                set.insert(val);
                }
            return true;
        }
    };