// https://leetcode.com/problems/reverse-linked-list/description/

#include<bits/stdc++.h>
#define int long long int

using namespace std;

 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};
  
class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        // handling list size = 0 or 1
        if(head == nullptr || head->next == nullptr){
            return head;
        }

        // handling list size >= 2
        ListNode * p = nullptr;
        ListNode * q = head;
        ListNode * r = head->next;

        while(q!=nullptr){

            q->next = p;
            p = q;
            q = r;
            if(r) r = r->next;
        }

        return p;
    }
};

// Using Recusrion
// class Solution {
// public:

//     ListNode* reverse(ListNode * head){

//         if(head->next == nullptr){
//             return head;
//         }
        
//         ListNode* rHead = reverse(head->next);
//         head->next->next = head;
//         head->next = nullptr;
//         return rHead;
//     }

//     ListNode* reverseList(ListNode* head) {

//         if(head == nullptr || head->next == nullptr){
//             return head;
//         }

//         return reverse(head);
//     }
// };

signed main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   return 0;
}