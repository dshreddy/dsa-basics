// https://leetcode.com/problems/merge-two-sorted-lists/
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if(list1==nullptr){
            return list2;
        }
        if(list2==nullptr){
            return list1;
        }

        ListNode * head, * tail;

        if(list1->val > list2->val){
            head = tail = new ListNode(list2->val);
            list2 = list2->next;
        }
        else{
            head = tail = new ListNode(list1->val);
            list1 = list1->next;
        }

        while(list1 && list2){

            if(list1->val > list2->val){
                ListNode * newNode = new ListNode(list2->val);
                tail->next = newNode;
                tail = newNode;
                list2 = list2->next;
            }
            else{
                ListNode * newNode = new ListNode(list1->val);
                tail->next = newNode;
                tail = newNode;
                list1 = list1->next;
            }
        }
        while(list1){
            ListNode * newNode = new ListNode(list1->val);
            tail->next = newNode;
            tail = newNode;
            list1 = list1->next;
        }
        while(list2){
            ListNode * newNode = new ListNode(list2->val);
            tail->next = newNode;
            tail = newNode;
            list2 = list2->next;
        }

        return head;
    }
};

signed main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   return 0;
}