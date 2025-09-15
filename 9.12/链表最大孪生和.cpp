#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <memory>
#include <numeric>
#include <queue>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <cctype> 
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
//栈+指针
class Solution {
    public:
        int pairSum(ListNode* head) {
            vector<int>stack;
            while (head) {
                stack.push_back(head->val);
                head=head->next;
            }
            int maxint=0;
            int n = stack.size();
            for (int i = 0; i < n / 2; i++) {
                maxint = max(stack[i] + stack[n - 1 - i], maxint);
            }
            return maxint;
        }
    };