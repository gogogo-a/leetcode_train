#include <iostream>
using namespace std;
//双指针
class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=0;
        while (r<n) {
        if (nums[r]){
            swap(nums[r],nums[l]);
            l++;
        }
        r++;
       }
            

        }
    };

int main(){
    Solution sol;
    // 使用构造函数初始化vector，而不是初始化列表
    vector<int> nums;
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(3);
    nums.push_back(12);
    sol.moveZeroes(nums);
    
    // 打印移动零后的数组
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
}