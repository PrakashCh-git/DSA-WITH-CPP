#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    for(int ele : s){
        cout<<ele<<" ";
    }

    //To find if the a target exists in the set or not.
    int target = 4;
    if(s.find(target)!=s.end()){
        cout<<"Target Exists";
    }
    else cout<<"Target doesn't Exists";

    return 0;
}