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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        ListNode* temp = head;
        //Creating a pre-occupied array of size m*n preoccupied with -1
        vector<vector<int>>Matrix(m,vector<int>(n,-1));
        int len = 0;
        while(temp->next!=NULL){
            temp = temp->next;
            len++;
        }
        len = len+1;

        int minrow = 0, maxrow = m-1;
        int mincol = 0, maxcol = n-1;
        temp = head;
        while(minrow<=maxrow && mincol<=maxcol){
            //Right 
            for(int i = mincol; i<=maxcol; i++){
                if(temp==NULL)return Matrix;
                Matrix[minrow][i] = temp->val;
                temp = temp->next;
            }
            minrow++;
            if(minrow>maxrow || mincol>maxcol) break;
        
            //Down
            for(int i = minrow; i<=maxrow; i++){
                if(temp==NULL)return Matrix;
                Matrix[i][maxcol] = temp->val;
                temp = temp->next;
            }
            maxcol--;
            if(minrow>maxrow || mincol>maxcol) break;

        
            //Left
            for(int i = maxcol; i>=mincol; i--){
                if(temp==NULL)return Matrix;
                Matrix[maxrow][i] = temp->val;
                temp = temp->next;
            }
            maxrow--;
            if(minrow>maxrow || mincol>maxcol) break;

        
            //Up
            for(int i = maxrow; i>=minrow; i--){
                if(temp==NULL)return Matrix;
                Matrix[i][mincol] = temp->val;
                temp = temp->next;
            }
            mincol++;
            if(minrow>maxrow || mincol>maxcol) break;
        }

    return Matrix;
    }
};