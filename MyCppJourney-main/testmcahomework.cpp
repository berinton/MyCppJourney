#include<iostream>
using namespace std;

class person{
    public:
        string name;
        int age;

        person(){
            name="null";
            age=0;
        }
        void display(){
            cout<<"\nname = "<<name;
            cout<<"\nage = "<<age<<endl;
        }
};
class student{
    public:
        int roll;
        float percent;

        student(){
            roll=0;
            percent=0.0;
        }
        void display1(){
            cout<<"\nroll = "<<roll;
            cout<<"\npercent = "<<percent<<"%"<<endl;
        }
};
class player:  public person, public student{// Multiple inheritance
    public:
        int matchplayed;
        int jerseyno;

        player(){
            matchplayed=0;
            jerseyno=6;
        }
        void display2(){
            display();
            display1();
            cout<<"\nNo of match played = "<<matchplayed;
            cout<<"\nJersey no = "<<jerseyno<<endl;
        }
};
int main(){
    player x;
    x.display2();// Call of multiple inheritance
}
