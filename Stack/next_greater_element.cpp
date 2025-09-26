#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[] = {1,3,5,6,8,4,2,9,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans[n-1];

    stack<int> st;
    st.push(arr[n-1]);
    ans[n-1] = -1;

    for(int i = n-2; i>=0; i--){
        //popping
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        // answer updating
        if(st.size()==0)ans[i] = -1;
        else ans[i] = st.top();

        //pushing in stack
        st.push(arr[i]);
        
    }

    for(int i = 0; i<n; i++){
        cout<<ans[i]<<" ";
    }


    return 0;
}