#include<iostream>
using namespace std;
class Time{
    int hrs, min;
public:
    void display();
    void operator=(int);//overloading function
};
void Time::display(){
    cout<<hrs<< ": Hours(s) "<<min<< " Minutes"<<endl;
}
void Time::operator=(int t)
{
    cout<<"Basic Type to -->Class type Conversion..."<<endl;
    hrs=t/60; //division operator to get hours
    min=t%60; //modulo operator to get minutes
}
int main(){
    Time t1;
    int duration;
    cout<<"\n Enter time duration in minutes: ";
    cin>>duration;
    t1=duration;
    t1.display();
    cout<<"Enter time duration in minutes: ";
    cin>>duration;

    cout<<"object t1 assignment operator method...."<<endl;
    t1.operator=(duration); //operator overloading
    t1.display();
    return 0;
}
