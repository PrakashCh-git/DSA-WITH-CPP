#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;

class Solution {
public:
    int smallestRepunitDivByK(int k) {
        unordered_set<int> mp;
        int x = 1;
        int len = 1;
        int rem = x%k;
        mp.insert(rem);
        if(rem==0)return len;

        while(rem!=0) {
            x = rem*10+1;
            len++;
            int nrem = x%k;
            if(mp.count(nrem))return -1;
            rem = nrem;
            mp.insert(rem);
        }

        return len;

    }
};