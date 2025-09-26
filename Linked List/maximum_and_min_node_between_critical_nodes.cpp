
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
        vector<int> nodesBetweenCriticalPoints(ListNode* head) {
            ListNode* curr = head;
            ListNode* prev = head;
            ListNode* Next = head->next;
            vector<int> critical;
            int count = 1;
            while(Next!=NULL){
                curr = Next; 
                Next = Next->next;
                if(Next==NULL)break;
                //Maxima
                if(curr->val>prev->val && curr->val>Next->val)critical.push_back(++count);
                //Maxima
                else if(curr->val<prev->val && curr->val<Next->val)critical.push_back(++count);
                //Else
                else count++;
                prev = curr;
            }
            vector<int> arr(2);
            if(critical.size()>=2){
                if(critical.size()==2){
                    arr[0] = critical[1] - critical[0];
                    arr[1] = critical[1] - critical[0];
                }
                else{
                    arr[1] = critical[critical.size()-1] - critical[0];
                    int i = 0;
                    int j = 1;
                    int mn = critical[j] - critical[i];
                    while(j<=critical.size()-1){
                        int x = critical[j] - critical[i];
                        if(mn>x)mn = x;
                        i++;
                        j++;
                    }
                    arr[0] = mn;
                }
            }
            else{
                arr[0] = -1;
                arr[1] = -1;
            }
    
            return arr;
    
        }
    };