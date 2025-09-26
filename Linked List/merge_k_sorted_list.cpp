#include<iostream>
#include<vector>
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
    ListNode* merge(ListNode* a, ListNode* b){
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
        else{
            tempC->next = tempA;
        }
        return C->next;
        
    }
    ListNode* mergeKLists(vector<ListNode*>& arr) {
        if(arr.size()==0)return NULL;
        while(arr.size()>1){
            ListNode* a = arr[0];
            arr.erase(arr.begin());
            ListNode* b = arr[0];
            arr.erase(arr.begin());
            ListNode* c = merge(a,b);
            arr.push_back(c);
        }
        return arr[0];
    }
};