#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
void maxValue(vector<int>& arr, int idx, int &MX) {
    if(idx == arr.size()) return;
    if(MX<arr[idx])MX = arr[idx];
    maxValue(arr,idx+1,MX);
}
int main() {

    vector<int> v;
    v.push_back(20);
    v.push_back(-2);
    v.push_back(23);
    v.push_back(2);
    v.push_back(89);
    v.push_back(43);
   
    int MX = INT_MIN;
    maxValue(v,0,MX);
    cout<<MX;
    return 0;
}