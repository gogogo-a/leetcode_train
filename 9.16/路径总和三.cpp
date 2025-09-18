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
  //枚举
//   class Solution {
//     public:
//         int pathSum(TreeNode* root, int targetSum) {
//             if(!root) return 0;
//             queue<TreeNode*> q;
//             q.push(root);
//             int c=0;
//             while(!q.empty()){
//                 auto node=q.front();
//                 q.pop();
//                 c+=dfs(node,0,targetSum);
//                  if (node->left) {
//                         q.push(node->left);
    
//                     }
//                     if (node->right) {
//                     q.push(node->right);
//                     }
    
//             }
//             return c;
//         }
//         int dfs(TreeNode* node,long int sum,int targetSum){
//             if(!node) return 0;
//             sum+=node->val;
//             int count =0;
//             if(sum==targetSum){
//                 count+=1;
//             }
//             count+=dfs(node->left,sum,targetSum);
//             count+=dfs(node->right,sum,targetSum);
//             return count;
    
//         }
//         };
//hashmap+前缀和
class Solution {
    public:
        unordered_map<long long, int> map;
        int count = 0;
        void dfs(TreeNode* node,long long sum ,int targetSum){
            if (!node) {
            return;
            }
            sum +=node->val;
            if (map.find(sum-targetSum)!=map.end()) {
                count+=map[sum-targetSum];
            }
            map[sum]++;
            dfs(node->left,sum,  targetSum);
            dfs(node->right,sum,  targetSum);
            map[sum]--;
        }
        int pathSum(TreeNode* root, int targetSum) {
            map[0]=1;
            dfs(root, 0, targetSum);
            return count;
        }
        };