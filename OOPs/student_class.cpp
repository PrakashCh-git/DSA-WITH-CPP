#include<iostream>
#include<string>
using namespace std;
class Student{
public:
    string name;
    int rno;
    float gpa;
    int age;
};
int main(){
    Student s1;
    s1.name = "Prakash";
    s1.rno = 32;
    s1.gpa = 7.79;
    s1.age = 21;



    cout<<s1.name<<" "<<s1.rno<<" "<<s1.age<<" "<<s1.gpa;
    return 0;
}