#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[] = {100,80,60,81,70,60,75,85};
    int n = sizeof(arr)/sizeof(arr[0]);
    int prevGI[n];
    stack<int> st;

    prevGI[0] = -1;
    st.push(0);

    for(int i = 1; i<n; i++){
        while(st.size()!=0 && arr[st.top()]<=arr[i]){
            st.pop();
        }
        if(st.size()==0)prevGI[i] = -1;
        else prevGI[i] = st.top();

        st.push(i);
    }
    int span[n];
    for(int i = 0; i<n; i++){
        span[i] = i - prevGI[i];
        cout<<span[i]<<" ";
    }
    return 0;
}