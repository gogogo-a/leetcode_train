#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>
using namespace std;
class Solution {
    public:
        int pivotIndex(vector<int>& nums) {
          int n=nums.size();
          int sum=0;
          int total=accumulate(nums.begin(),nums.end(),0);
          for (int i=0; i<n; i++) {
            if (2*sum+nums[i]==total) {
                return i;
            }
            sum+=nums[i];
          }
          return -1;
        }
    };