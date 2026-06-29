#include<iostream>
#include<string>
using namespace std;
class Student{
public:
    string name;
    int rno;
    float marks;
    Student(string name,int rno,float marks){
        this->name=name;
        this->rno=rno;
        this->marks=marks;
    }
};
void change(Student &s){
    s.name="morning";
}
void chnage2(Student *s){
    s->name="morning";
}
int main(){
    // Student s("morning star",76,92.6);
    // // cout<<s.name<<endl;
    // // change(s);
    // // cout<<s.name;
    // // Student *ptr=&s;
    // cout<<s.name<<endl;
    // //(*ptr).name="morning";
    // // ptr->name="morning";//both are same we either use pointer or-> this,both chnage vlaue by reremce;
    // chnage2(&s);
    // cout<<s.name;
    Student*s=new Student("morrning star",76,92.6);
    cout<<s->name<<endl;
    chnage2(s);
    cout<<s->name;


}
