//type conversion class to basic : casting operator overloaded
#include<iostream>
using namespace std;
class Time{
    int hrs, min;
public:
    Time(){
        hrs=3;
        min=20;
    }
    void display();
    operator int();
};
void Time::display(){
    cout<<hrs<< ": Hours(s)"<<endl;
    cout<<min<< ": Minutes"<<endl;
}
Time::operator int (){
    int totalMinutes;
    totalMinutes=(hrs*60)+min;
    return totalMinutes;
}
int main(){
    Time t1;
    t1.display();
    int duration=0;
    duration=t1;
    //duration=int(t1); //explicit
    duration=t1;
    cout<<"\n Duration is "<<duration<<endl;
    return 0;
}
