#include<iostream>
using namespace std;
class Player{
private:
    int health;
    int score;
public:
    //Setter
    void setHealth(int h){
        health = h;
    }

    void setScore(int s){
        score = s;
    }
    //Getter
    int showHealth(){
        return health;
    }
    int showScore(){
        return score;
    }
};
int main(){
    Player Prakash;
    Prakash.setHealth(100);
    Prakash.setScore(50);

    cout<<Prakash.showHealth();
    cout<<endl;
    cout<<Prakash.showScore();
    return 0;
}