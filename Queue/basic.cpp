#include<iostream>
#include<queue>
using namespace std;
//Display function to display a queue
void display(queue<int> &q){
    int n = q.size();
    for(int i = 1; i<=n; i++){
        int x = q.front();
        cout<<q.front()<<endl;
        q.pop();
        q.push(x);
    }
}
int main(){
    queue<int> q;
    //Pushing elements in the queue.
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    
    //Checking if the queue is empty or full.
    bool flag = q.empty();
    cout<<flag<<endl;

    //Checking the size of the queue
    cout<<q.size()<<endl;

    //Displaying the function
    display(q);




    //display(q);
    return 0;
}