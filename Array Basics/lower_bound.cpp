#include<iostream>
#include<vector>
using namespace std;

int lowerbound(vector <int> &n, int target){
    if(target < n[0]){
        cout<<"target is out of league.";
    }
    else if(target > n[n.size()-1]){
        return n[n.size()-1];
    }
    int low = 0;
    int high = n.size()-1;
    
    while(low<=high){
        int mid = low + (high - low)/2;
        
        if(n[mid]==target)return n[mid-1];
        
        else if(n[mid]<target){
            low = mid;
            if(n[mid+1]>target){
                return n[mid];
            }
        }
        
        else if(n[mid]>target){
            high = mid;
            if(n[mid-1]<target){
                return n[mid-1];
            }
        }
    }
    
    
    
    return -1;
}

int main(){
    int target;
    cout<<"Enter target element  : ";
    cin>>target;
    
    
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(9);
    v.push_back(15);
    v.push_back(18);
    v.push_back(21);
    v.push_back(24);
    
    
    int y = lowerbound(v,target);
    cout<<y;
    return 0;
}