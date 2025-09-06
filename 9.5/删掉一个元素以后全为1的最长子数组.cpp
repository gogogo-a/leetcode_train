#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>
using namespace std;
//滑动窗口
class Solution {
    public:
        int longestSubarray(vector<int>& nums) {
            int c=0;
            int res=0;
            int n=nums.size();
            int k=1;
            for (int i=0; i<n && c<k; i++) {
             if (nums[i]==0) {
                 c++;
                 res++;
             }
             if (nums[i]==1) {
                 res++;
             }
            }
            int i=res;
            int maxres=res;
            while (i<n) {
             if (c==k && nums[i]==0) {
                 if (nums[i-res]==0) {
                     c--;
                     res--;    
                     maxres=max(maxres,res);           
                 }
                 else {
                     res--;
                     maxres=max(maxres,res);   
                 }
             }
             if (c<k || (c==k && nums[i]==1)) {
                 if (nums[i]==0) {
                     c++;
                     res++;
                     maxres=max(maxres,res);   
                 }
                 if (nums[i]==1) {
                     res++;
                     maxres=max(maxres,res);   
                 }
                 i++;
             }
            }
            return maxres-1;
        }
    };