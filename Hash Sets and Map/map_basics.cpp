#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m; //map<key,value> m

    pair<string,int> p1;
    p1.first = "Prakash";
    p1.second = 32;
    m.insert(p1);

    pair<string,int> p2;
    p2.first = "Ajay";
    p2.second = 03;
    m.insert(p2);

    pair<string,int> p3;
    p3.first = "Raj";
    p3.second = 37;
    m.insert(p3);


    //for(pair<string,int> ele : m){
    //  cout<<ele.first<<" "<<ele.second<<endl;
    //}
    

    //Second Insertion Technique
    m["Harsh"] = 12;
    m["Ritesh"] = 47;

    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    m.erase("Ritesh");
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;
}