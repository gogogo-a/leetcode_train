#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;
//暴力破解
class Solution {
    public:
        int maxOperations(vector<int>& nums, int k) {
            int n =nums.size();
            int c=0;
            for (int j=0; j<nums.size(); j++) {
                if (nums[j]>k) {
                    continue;
                }
                for (int i=j+1; i<nums.size(); i++) {
            
                    if (nums[j]+nums[i]==k) {
                        c++;
                        nums[j]=k;
                        nums[i]=k;
                        break;
                    }
                }
            }
            return c;
            }
};

//hashmap
class Solution1 {
    public:
        int maxOperations(vector<int>& nums, int k) {
            int res=0;
            unordered_map<int,int>counts;
            for (int current_num : nums) {
                int need=k-nums[current_num];
                if (counts.count(need) && counts[need]>0){
                    res++;
                    counts[need]--;
                }
                else {
                    counts[current_num]++;
                }
            }
            return  res;
        }
    };
//双指针
class Solution2 {
        public:
            int maxOperations(vector<int>& nums, int k) {
                sort(nums.begin(), nums.end());
                int l=0,r=nums.size();
                int res=0;
                while (l<r) {
                    int sun= nums[l]+nums[r];
                    if (l<r&&sun==k)
                    {
                        l++;
                        r--;
                        res++;
                    }
                    else {
                    if (sun>k) {
                        r--;
                    
                    }
                    else {
                    l++;
                    }
                    }
                }
                return res;
            }
        };

int main() {
    Solution sol;
    vector<int> a;
    a.push_back(4);
    a.push_back(4);
    a.push_back(1);
    a.push_back(3);
    a.push_back(1);
    a.push_back(3);
    a.push_back(2);
    a.push_back(2);
    a.push_back(5);
    a.push_back(5);
    a.push_back(1);
    a.push_back(5);
    a.push_back(2);
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(5);
    a.push_back(4);
    int k =2;
    cout << sol.maxOperations(a,k);
}