#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v(6);
    v[0] = 0;
    v[1] = 0;
    v[2] = 1;
    v[3] = 2;
    v[4] = 0;
    v[5] = 2;

    int l = 0,m = 0, h = 5;
    for(int i = 0; i<6; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    while(m<=h){
        if(v[m]==0){
            int temp;
            temp  = v[l];
            v[l] = v[m];
            v[m] = temp;
            m++;
            l++;
        }
        else if(v[m]==1){
            m++;
        }
        else if(v[m]==2){
            int temp;
            temp = v[m];
            v[m] = v[h];
            v[h] = temp;
            h--;
        }
    }
    for(int i = 0; i<6; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}