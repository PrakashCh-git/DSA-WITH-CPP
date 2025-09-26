#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack <int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    /*Printing the elements of the stack : Stack got Empty
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }*/

    //We will use an extra stack to store the elements of the orginal Stack while popping so that we can push that back again the stack.
    stack <int> temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        int x = st.top();
        st.pop();
        temp.push(x);
    }

    //puttiing the elements again in the stack
    while(temp.size()>0){
        int x = temp.top();
        temp.pop();
        st.push(x);
    }

    return 0;
}
