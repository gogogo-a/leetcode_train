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
//深度搜索
class Solution {
    public:
        bool leafSimilar(TreeNode* root1, TreeNode* root2) {
            vector<int> r1,r2;
            stack<TreeNode*> s1,s2;
            s1.push(root1);
            s2.push(root2);
            while (!s1.empty()) {
                auto temp=s1.top();
                s1.pop();
                if (temp->left ||temp->right) {
                    if (temp->left) {
                        s1.push(temp->left);
                    }
                    if (temp->right) {
                        s1.push(temp->right);
                    }
                }else {
                    r1.push_back(temp->val);
                }
            }
            while (!s2.empty()) {
                auto temp=s2.top();
                s2.pop();
                if (temp->left ||temp->right) {
                    if (temp->left) {
                        s2.push(temp->left);
                    }
                    if (temp->right) {
                        s2.push(temp->right);
                    }
                }else {
                    r2.push_back(temp->val);
                }
            }   
            
            if (r1.size()!=r2.size()) {
                return false;
            }          
            for (int i=0; i<r1.size(); i++) {
                if (r1[i]!=r2[i]) {
                    return false;
                }
            }
            return true;
        }
    };