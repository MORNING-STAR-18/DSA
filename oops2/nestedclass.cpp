#include<iostream>
using namespace std;
class Gun{
    public:
    int ammo;
    int damage;
    int scope;
};
class player{
    class Helmet{
        private:
        int hp;
        int level;
        public:
        void sethp(int hp){
            this->hp=hp;
        }
        void setlevel(int level){
            this->level=level;
        }
        int gethp(){
            return hp;
        }
        int getlevel(){
            return level;
        }
    };
    private:
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;
    Helmet helmet;
    public:
    int gethealth(){
        return health;
    }
    int getage(){
        return age;
    }
    int getscore(){
        return score;
    }
    int  isalive(){
        return alive;
    } 
    Gun getgun(){
        return gun;
    }
    void  sethealth(int health){
        this->health=health;
    }
    void setage(int age){
        this->age=age;
    }
    void setscore(int score){
        this->score=score;
    }
    void  setisalive(bool alive){
        this->alive=alive;
    }
    void setgun(Gun gun){
        this->gun=gun;
    }
    void sethelmet(int level){
        Helmet*helmet=new Helmet;
        helmet->setlevel(level);
        int health;
        if(level==1) health=25;
        else if(level==2) health=50;
        else if(level==3) health=100;
        else cout<<"error invalid level!!";
        helmet->sethp(health);
        this->helmet=*helmet;
    }
    void gethelemt(){
        cout<<helmet.gethp()<<endl;
        cout<<helmet.getlevel()<<endl;
    }
};
int main(){
    Gun akm;
    akm.ammo=100;
    akm.damage=50;
    akm.scope=2;
    Gun awm;
    awm.ammo=15;
    awm.damage=150;
    awm.scope=8;
    player harsh;
    harsh.setage(21);
    harsh.setscore(100);
    harsh.setisalive(true);
    harsh.sethealth(70);
    harsh.setgun(akm);
    harsh.sethelmet(2);
    player raghav;
    raghav.setage(22);
    raghav.setscore(20);
    raghav.setisalive(true);
    raghav.sethealth(100);
    raghav.setgun(awm);
    raghav.sethelmet(3);  
    Gun gun123=harsh.getgun();
    cout<<gun123.damage<<endl;
    cout<<gun123.ammo<<endl;
    cout<<gun123.scope<<endl;
    harsh.gethelemt();
   
}