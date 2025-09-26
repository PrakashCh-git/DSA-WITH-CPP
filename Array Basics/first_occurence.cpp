#include<iostream>
#include<vector>
using namespace std;

int first_occurence(vector<int> v, int target){
    //Checking if target is present in the array or not;
    if(target<v[0]||target>v[0]){
        cout<<"Target is out of league;";
        return -1;
    }

    int low = 0;
    int high = v.size()-1;

    while(low<=high){
        int mid = low + (high-low)/2;

        //Checking if the mid element is equal to the target element
        if(v[mid]==target){
            if(v[mid-1]==target)high=mid;
            else{return mid;}
        }

        if(v[mid]!=target){
            if(v[mid]<target)low = mid+1;
            else if(v[mid]>target)high = mid-1;
        }

    }
    return -1;



}
int main(){

    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(3);
    v.push_back(3);
    v.push_back(3);
    v.push_back(3);
    v.push_back(5);
    v.push_back(5);
    v.push_back(5);
    v.push_back(8);
    v.push_back(8);
    v.push_back(9);


    return 0;



}