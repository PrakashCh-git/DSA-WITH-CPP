#include<iostream>
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
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        // METHOD 1 : USING n+m EXTRA SPACE
        /*ListNode* tempA = a;
        ListNode* tempB = b;
        
        ListNode* c = new ListNode(-1);
        ListNode* tempC = c;

        while(tempA!=NULL && tempB!=NULL){
            if(tempA->val<=tempB->val){
                ListNode* temp = new ListNode(tempA->val);
                tempC->next = temp;
                tempC = temp;
                tempA = tempA->next;
            }
            else{
                ListNode* temp = new ListNode(tempB->val);
                tempC->next = temp;
                tempC = temp;
                tempB = tempB->next;
            }
        }
        if(tempA==NULL){
            tempC->next = tempB;
        }
        else{
            tempC->next = tempA;
        }
        return c->next;  */



        //METHOD 2 : USING SPACE COMPLEXITY O(1);
        ListNode* C = new ListNode(-1);
        ListNode* tempC = C;
        ListNode* tempA = a;
        ListNode* tempB = b;

        while(tempA!=NULL && tempB!=NULL){
            if(tempA->val<=tempB->val){
                tempC->next = tempA;
                tempC = tempA;
                tempA = tempA->next;
            }
            else{
                tempC->next = tempB;
                tempC = tempB;
                tempB = tempB->next;
            }
        }
        if(tempA==NULL){
            tempC->next = tempB;
        }
        else tempC->next = tempA;

        return C->next;
    }
};