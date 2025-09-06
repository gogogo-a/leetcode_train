#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>
using namespace std;
//数组
class Solution {
    public:
        int largestAltitude(vector<int>& gain) {
            int n =gain.size();
            int maxres=0,res=0;
            int c=0;
            for (int i=0; i<n; i++) {
                res=res+gain[i];
                maxres=max(res,maxres);
            }
            return maxres;
        }
    };