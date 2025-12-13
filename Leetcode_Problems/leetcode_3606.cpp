#include<iostream>
#include<vector>
#include<unordered_set>
#include<map>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        int i = 0;
        vector<string> result;
        unordered_set<string> st;
        map<int,vector<string>> mp;

        st.insert("electronics");//0
        st.insert("grocery");//1
        st.insert("pharmacy");//2
        st.insert("restaurant");//3
        

        for(int i = 0; i<code.size(); i++) {
            if(!isActive[i])continue;
            if(businessLine[i]=="")continue;
            if(code[i]=="")continue;
            if(st.find(businessLine[i])==st.end())continue;

            string cd = code[i];

            bool flag = true;
            for(int j = 0; j<cd.size(); j++) {  
                if(!isalnum(cd[j]) and cd[j]!='_') {
                    flag = false;
                    break;
                }
            }

            if(businessLine[i]=="electronics" and flag) mp[0].push_back(cd);
            if(businessLine[i]=="grocery" and flag) mp[1].push_back(cd);
            if(businessLine[i]=="pharmacy" and flag) mp[2].push_back(cd);
            if(businessLine[i]=="restaurant" and flag) mp[3].push_back(cd);
    
        }

        for(auto p : mp) {
            auto v = p.second;
            sort(v.begin(),v.end());
            for(int i = 0; i<v.size(); i++) {
                result.push_back(v[i]);
            }
        }

        return result;

    }
};