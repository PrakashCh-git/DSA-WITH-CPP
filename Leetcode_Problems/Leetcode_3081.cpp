#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<unordered_map>
using namespace std;

class Solution {
public:
    string minimizeStringValue(string s) {
        priority_queue<pair<int,char>, vector<pair<int,char>>, greater<pair<int,char>>> pq;
        unordered_map<char,int> mp;

        for(int i = 0; i<26; i++) {
            mp.insert({char(i+97),0});
        }

        for(int i = 0; i<s.size(); i++) {
            if(s[i]!='?') mp[s[i]]++;
        }

        for(auto &p : mp) {
            char ch = p.first;
            int x = p.second;
            pq.push({x,ch});
        }
        vector<char> rep;
        vector<int> pla;
        for(int i = 0; i<s.size(); i++){
            if(s[i]=='?') {
                pla.push_back(i);
                auto q = pq.top();
                pq.pop();
                char ch = q.second;
                rep.push_back(ch);
                int y = q.first+1;
                pq.push({y,ch});
            }
        }

        sort(rep.begin(),rep.end());
        int j = 0;

        for(int i = 0; i<pla.size(); i++) {
            s[pla[i]] = rep[j];
            j++;
        }
        
        return s;

    }
};