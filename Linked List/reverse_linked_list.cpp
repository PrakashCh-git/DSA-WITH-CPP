#include<iostream>
using namespace std;
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};
/* METHOD : 1 Brute force
class Solution {
public:
    ListNode* getnodeat(ListNode* h, int idx){
            ListNode* temp = h;
            for(int i = 1; i<idx; i++){
                temp = temp->next;
            }
            return temp;
        }
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        int j = 0;
        while(temp!=NULL){
            temp = temp->next;
            j++;
        }
        int i = 1;
        
        while(i<j){
            ListNode* left = getnodeat(head,i);
            ListNode* right = getnodeat(head,j);
            int t = left->val;
            left->val = right->val;
            right->val = t;
            i++;
            j--;
        }
        return head;
    }
};

*/

//METHOD : 2 Iterative Approach
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* Next = head;
        while(curr){
            Next = Next->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }
};

//METHOD : 3 Recursive Approach
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL)return head;
        ListNode* newhead = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return newhead;
    }
};
 