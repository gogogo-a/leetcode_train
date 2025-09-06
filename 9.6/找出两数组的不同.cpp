#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <unordered_map>
#include <vector>
//hashmap
using namespace std;
class Solution {
    public:
        vector<vector<int> > findDifference(vector<int>& nums1, vector<int>& nums2) {
            unordered_map<int,int>count1;
            unordered_map<int,int>count2;
            vector<vector<int> >  res(2);
            int n1=nums1.size();
            int n2=nums2.size();
            for (int i=0; i<n1; i++) {
                count1[nums1[i]]++;
            }
            for (int i=0; i<n2; i++) {
                count2[nums2[i]]++;
            }
            for (int i=0; i<n1; i++) {
                if (count2[nums1[i]]<=0) {
                    count2[nums1[i]]++;
                 res[0].push_back(nums1[i]);
                }
            }
            for (int i=0; i<n2; i++) {
                if (count1[nums2[i]]<=0) {
                    count1[nums2[i]]++;
                    res[1].push_back(nums2[i]);
                }
            }
            return res;
        }
    };