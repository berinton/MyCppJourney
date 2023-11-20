#include<iostream>
using namespace std;

class person{
    public:
        string name;
        int age;

        person(){
            name="Berry";
            age=21;
        }
        void display(){
            cout<<"\nName = "<<name;
            cout<<"\nAge = "<<age<<endl;
        }
};
class student: public person{
    public:
        int roll;
        float percent;

        student(){
            roll=04;
            percent=0.0;
        }
        void display1(){
            cout<<"\nRoll = "<<roll;
            cout<<"\nPercent = "<<percent<<"%"<<endl;
        }
};
class player:  public person{
    public:
        int matchplayed;
        int jerseyno;

        player(){
            matchplayed=7;
            jerseyno=6;
        }
        void display2(){
            cout<<"\nNo of match played = "<<matchplayed;
            cout<<"\nJersey no = "<<jerseyno<<endl;
        }
};
int main(){
        student a;
        a.display1();
        a.display();

        player b;
        b.display2();
        b.display();

        return 0;
}
