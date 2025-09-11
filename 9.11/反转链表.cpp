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
//双指针+链表
class Solution {
    public:
        ListNode* reverseList(ListNode* head) {
            ListNode* pre=nullptr;
            ListNode* cur=head;
            while (cur) {
                ListNode* next=cur->next;
                next=pre;
                pre=cur;
                cur=next;
            }
            return pre;
        }
    };