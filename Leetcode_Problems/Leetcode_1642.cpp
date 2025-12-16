#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int> pq;
        int i = 0;

        for(i = 0; i<heights.size(); i++) {
            if(i==heights.size()-1) break;
            int diff = heights[i+1] - heights[i];
            if(diff<=0) continue;

            bricks -= diff;
            pq.push(diff);

            if(bricks < 0) {
                while(!pq.empty() and ladders > 0 and bricks<0) {
                    bricks += pq.top();
                    pq.pop();
                    ladders--;
                }
                if(bricks<0) return i;
            }

            
        }

        return i;
    }
};