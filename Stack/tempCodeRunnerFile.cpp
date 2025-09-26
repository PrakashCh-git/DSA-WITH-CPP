#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[] = {2,1,5,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int pse[n];
    int nse[n];
    stack<int> st;
    nse[n-1] = n;
    st.push(n-1);
    for(int i = n-2; i>=0; i--){
        while(st.size()!=0 && arr[st.top()]>arr[i])st.pop();

        if(st.size()==0)nse[i] = n;
        else nse[i] = st.top();

        st.push(i);
    }
    
    while(st.size()!=0)st.pop();
    st.push(0);
    pse[0] = -1;
    for(int i = 1; i<n; i++){
        while(st.size()!=0 && arr[st.top()]>arr[i])st.pop();

        if(st.size()==0)pse[i] = -1;
        else pse[i] = st.top();

        st.push(i);
    }

    for(int i = 0; i<n; i++){
        cout<<nse[i]<<" ";
    }
    return 0;
}