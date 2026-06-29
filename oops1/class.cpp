#include<iostream>
using namespace std;
class player{//there are threee type of class public,private,protected
    public:
    int score;
    // private:
    int health;
};
int main(){
    player players[10];
    player amit;
    amit.score=98;
    amit.health=100;
    players[0] =amit;
    cout<<amit.score<<endl<<amit.health<<endl;
    player harsh;
    harsh.score=100;
    harsh.health=20;
    players[1] =harsh;
    cout<<harsh.score<<endl<<harsh.health;
}
