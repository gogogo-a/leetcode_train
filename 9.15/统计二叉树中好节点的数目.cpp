#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <memory>
#include <numeric>
#include <queue>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
#include <cctype> 
using namespace std;

 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution {
    public:
        int goodNodes(TreeNode* root) {
            int good=0;
            stack<pair<TreeNode*, int> > s;
            s.push({root,root->val});
            while (!s.empty()) {
                auto temp=s.top();
                s.pop();
                if (temp.first->val>=temp.second) {
                    good++;
                }
                int newmax=max(temp.second,temp.first->val);
                if (temp.first->left) {
                        s.push({temp.first->left,newmax});
                    }
                if (temp.first->right) {
                        s.push({temp.first->right,newmax});
                }
                

            }
            return good;

        }
    };