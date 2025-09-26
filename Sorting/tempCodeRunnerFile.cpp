#include<iostream>
#include<climits>
using namespace std;
float max(float a, float b){
    if(a>=b)return a;
    else return b;
}
float min(float a, float b){
    if(a<=b)return a;
    else return b;
}
int main(){
    int n = 4;
    int arr[n] = {5,3,6,10};
    float kmin = (float)INT_MIN;
    float kmax = (float)INT_MAX;
    bool flag = true;
    //Finding the range of K
    for(int i = 1; i<n; i++){
        if(arr[i-1]>=arr[i]){
            kmin = max(kmin,(arr[i]+arr[i-1])/2.0);
        }
        else kmax = min(kmax,(arr[i]+arr[i-1])/2.0);

        if(kmin>kmax){
            flag = false;
            break;
        }
    }
    if(flag == false){
        cout<<"No value of K exists such that the array can be sorted";
    }
    else{
        cout<<"Actual Range : "<<"["<<kmin<<" "<<kmax<<"]";
    }
    cout<<endl;
    kmax = (int)kmax;
    if(kmin-(int)kmin>0){
        kmin = (int)kmin + 1;
    }
    if(kmin == kmax){
        cout<<"Only one integer value exist : "<<kmin;
    }
    else if(kmin>kmax){
        cout<<"No integer value of K exist";
    }
    
    return 0;
}