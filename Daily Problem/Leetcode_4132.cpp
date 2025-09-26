#include<iostream>
#include<queue>
using namespace std;


//MY SOLOTION 
/*
class Solution {
public:
    int maxDiff(int num) {
        deque<int> de;
        
        int n1 = -1;
        int n2 = -1;
        while(num!=0) {
            int r = num%10;
            de.push_front(r);
            num = num/10;
        }
        

        for(int i = 0; i<de.size(); i++) {
            if(de[i]!=9){
                n1 = de[i];
                break;
            }
        }
        for(int i = 0; i<de.size(); i++) {
            if(i==0 && de[i] != 1) {
                n2 = de[i];
                break;
            }
            else if(i>0 && de[i]!=0 && de[i]!=1) {
                n2 = de[i];
                break;
            }
        }

        long long max = 0;
        long long min = 0;
        int k = de.size();
        int minchange = 0;
        

        while(k!=0) {
            int front1 = de.front();
            int front2 = de.front();
            de.pop_front();

            if(front1==n1)front1 = 9;
            max = 1LL * max * 10 + front1;
            k--;
            if(n2 == -1) {
                min = 1LL * min * 10 + front2;
                continue;
            }
            else {
                if(front2 == n2) {
                    if(minchange==0 && min != 0)front2 = 0;
                    else{
                        front2 = 1;
                        minchange++;
                    }
                }
                min = 1LL * min * 10 + front2;
            }
        }
        return max - min;
    }
};
*/


//EDITORIAL SOLUTION