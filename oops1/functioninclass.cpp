#include<iostream>
using namespace std;
class player{
    public:
    int score;
    int health;
    void showhealth(){
        cout<<"health is :"<<health<<endl;
    }
    void showscore(){
        cout<<"score is :"<<score;
    }
};
class calculator{
    private:
    int a;
    int b;
    public:
    void add(){
        cout<<a+b<<endl;
    }
    void sub(){
        cout<<a-b;
    }
};
int main(){
    // player amit;
    // amit.score=98;
    // amit.health=100;
    // amit.showhealth();
    // amit.showscore();
    calculator calci;
    calci.add();
    calci.sub();
}
