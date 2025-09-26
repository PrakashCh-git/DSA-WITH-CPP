#include<iostream>
#include<string>
using namespace std;
class Cricketer{
public:
    string name;
    int runs;
    float avg;
    int age;

    Cricketer(){

    }

    Cricketer(string name, int runs, float avg, int age){
        this->name = name;
        this->runs = runs;
        this->avg = avg;
        this->age = age;
    }

    void print(){
        cout<<this->name<<" "<<this->runs<<" "<<this->avg<<" "<<this->age<<endl;
    }

    int matches(){
        return runs/avg;
    }
};
int main(){

    Cricketer c1("Virat Kohli",25000, 67.24, 39);

    int x = c1.matches();
    cout<<x<<endl;
    c1.print();



    
    return 0;
}