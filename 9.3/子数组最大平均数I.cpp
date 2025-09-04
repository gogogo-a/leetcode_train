#include <iostream>
#include <numeric>
#include <string>
#include <vector>
using namespace std;
//滑动窗口
class Solution {
    public:
        double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double res=0;
        for (int i=0; i<k; i++) {
            res+=nums[i];
        }
        double res1=res;
        for (int i=k; i<n; i++) {
            res=res-nums[i-k]+nums[i];
            res1=fmax(res1,res);
        
        }
        return res1/k;
        
        }
    };