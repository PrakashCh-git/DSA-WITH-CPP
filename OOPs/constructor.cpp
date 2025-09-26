#include<iostream>
#include<string>
using namespace std;
class Student{
public:
    string name;
    int rno;
    int age;
    float gpa;

    //Constructor
    Student(string s, int l, int m, float n){
        name = s;
        rno = l;
        age = m;
        gpa = n;
    }
};
void print(Student s){
    cout<<s.name<<" "<<s.rno<<" "<<s.age<<" "<<s.gpa;
}
int main(){
    Student s1("Prakash" , 32, 21, 7.79);
    print(s1);
    return 0;
}
