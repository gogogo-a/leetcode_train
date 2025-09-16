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
        int pathSum(TreeNode* root, int targetSum) {
            if(!root) return 0;
            queue<TreeNode*> q;
            q.push(root);
            int c=0;
            while(!q.empty()){
                auto node=q.front();
                q.pop();
                c+=dfs(node,0,targetSum);
                 if (node->left) {
                        q.push(node->left);
    
                    }
                    if (node->right) {
                    q.push(node->right);
                    }
    
            }
            return c;
        }
        int dfs(TreeNode* node,long int sum,int targetSum){
            if(!node) return 0;
            sum+=node->val;
            int count =0;
            if(sum==targetSum){
                count+=1;
            }
            count+=dfs(node->left,sum,targetSum);
            count+=dfs(node->right,sum,targetSum);
            return count;
    
        }
        
        };