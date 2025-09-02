#include <iostream>
#include <string>
#include <vector>
using namespace std;
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