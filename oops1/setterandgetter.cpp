#include<iostream>
using namespace std;
class player{
    private:
    int score;
    int health;
    public:
    void setscore(int s){
        score=s;
    }
    void sethealth(int h){
        health=h;
    }
    int getscore(){
        return score;
    }
    int gethealth(){
        return health;
    }
};
int main(){
    player harsh;
    harsh.setscore(10);
    harsh.sethealth(20);
    cout<<harsh.getscore();
    cout<<endl<<harsh.gethealth();
}