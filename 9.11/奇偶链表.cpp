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
//双指针+链表+链表分离
 class Solution {
    public:
        ListNode* oddEvenList(ListNode* head) {
            if (head==nullptr) {
                return head;
            }
            ListNode* odd=head;
            ListNode* envehead=head->next;
            ListNode* enve=head->next;
            while (enve!=nullptr && enve->next != nullptr) {
                odd->next=enve->next;
                odd=odd->next;
                enve->next=odd->next;
                enve=enve->next;
            }
            odd->next=envehead;
            return head;
            
        }
    };