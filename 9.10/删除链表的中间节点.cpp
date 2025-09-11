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
// Definition for singly-linked list.
 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
//快慢指针
 class Solution {
    public:
        ListNode* deleteMiddle(ListNode* head) {
            if (head->next==nullptr) {
                return nullptr;
            }
            ListNode* slow=head;
            ListNode* fast=head;
            ListNode* pre=nullptr;
            while (fast && fast->next) {
                fast=fast->next->next;
                pre=slow;
                slow=slow->next;
            }
            pre->next=slow->next;
            return head;
        }
    };