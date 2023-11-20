//Type conversion basic
#include<iostream>
using namespace std;
class Time{
    int hrs, min;
public:
    Time(int);
    void display();
};
Time::Time(int t){
    cout<<"Basic type to ---> Class type conversion..."<<endl;
    hrs=t/60; // division operator to get hours
    min=t%60; //modulo operator to get minutes
}
void Time::display(){
    cout<<hrs<< ": Hours(s)" <<endl;
    cout<<min<< ": Minutes" <<endl;
}
int main(){
    int duration;
    cout<<"\n Enter time duration in minutes: ";
    cin>>duration;
    Time t1=duration;
    t1.display();
    return 0;
}
