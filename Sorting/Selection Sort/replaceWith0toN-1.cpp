#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[] = {1,-44,-3,0,2,5,7,9};
    vector <int> v(8,0);//IsVisited Array
    int count = 0;
    for(int i = 0; i<8; i++){
        cout<<arr[i]<<" ";
    }
    //Replacement
    for(int i = 0; i<8; i++){
        int min = INT_MAX;
        int mindx = -1;
        for(int j = 0; j<8; j++){
            if(v[j]==1)continue;
            if(min>arr[j]){
                min = arr[j];
                mindx = j;
            }    
        }
        arr[mindx] = count;
        count++;
        v[mindx] = 1;
    }
    cout<<endl;
    for(int i = 0; i<8; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}