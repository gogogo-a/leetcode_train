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
// //递归
//  class Solution {
//     public:
//         int maxDepth(TreeNode* root) {
//             if (!root) {
//                 return 0;
//             }
//             return max(maxDepth(root->left),maxDepth(root->right))+1;
//         }
//     };
// //深度优先搜索
// class Solution {
//     public:
//         int maxDepth(TreeNode* root) {
//             if(!root){
//                 return 0;
//             }
//             int depth=0;
//             stack<pair<TreeNode*, int> > s;    
//             s.push({root, 1});
//             while (!s.empty()) {
//                 auto temp=s.top();
//                 s.pop();
//                 depth=max(temp.second,depth);
//                 if (temp.first->left) {
//                     s.push({temp.first->left,temp.second+1});
//                 }
//                 if (temp.first->right) {
//                     s.push({temp.first->right,temp->second+1});
//                 }
//             }
//             return depth;
//         }
//     };

//广度优先搜索
 class Solution {
    public:
        int maxDepth(TreeNode* root) {
            if(!root){
                return 0;
            }
            int depth=0;
            queue<pair<TreeNode*, int> >q;
            q.push({root,1});
            while (!q.empty()) {
                auto temp=q.front();
                q.pop();
                depth=max(temp.second,depth);
                if (temp.first->left) {
                    q.push({temp.first->left,temp.second+1});

                }
                if (temp.first->right) {
                q.push({temp.first->right,temp.second+1});
                }
            }
                return depth;

        }
    };