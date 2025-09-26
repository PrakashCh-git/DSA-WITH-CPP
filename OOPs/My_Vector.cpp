#include<iostream>
using namespace std;
class Vector{
public:
    int s=0;
    int capacity=1;
    int* arr = new int[1];

    //Addition of Element Function
    void add_back(int x){
        if(s==capacity){
            capacity *= 2;
            int* arr2 = new int[capacity];
            for(int i = 0; i<s; i++){
                arr2[i] = arr[i];
            }
            arr = arr2;
        }
        arr[s++] = x;
    }

    int size(){
        return this->s;
    }

    int get(int idx){
        if(idx<0 || idx>=s){
            cout<<"Index is out of bound";
            return -1;
        }
        if(s==0){
            cout<<"Array is Empty";
        }
        return arr[idx];
    }





     
};
int main(){
    Vector v;
    v.add_back(34);
    v.add_back(2);
    v.add_back(39);
    v.add_back(21);
    v.add_back(3);

    int x = v.get(3);

    cout<<x;
    
    

    return 0;
}
