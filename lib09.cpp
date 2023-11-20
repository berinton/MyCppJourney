#include<iostream>
using namespace std;
class person{
    int age;
    float ID;
    string name;
public:
    void input(){
        cout<<"Enter Person age: "<<endl;
        cin>>age;
        cout<<"Enter Person ID: "<<endl;
        cin>>ID;
        cout<<"Enter Person Name: "<<endl;
        cin>>name;
    }
    void display(){
        cout<<"Person Age: "<<age<<endl;
        cout<<"Person ID: "<<ID<<endl;
        cout<<"Person Name: "<<name<<endl;
    }
};
class student{
    int roll;
    string clases;
    float perc;

public:
    void input(){
        cout<<"Enter Students roll: "<<endl;
        cin>>roll;
        cout<<"Enter Students clases: "<<endl;
        cin>>clases;
        cout<<"Enter Students Percentage: "<<endl;
        cin>>perc;
    }
    void display(){
        cout<<"Students Roll: "<<roll<<endl;
        cout<<"Student Clases: "<<clases<<endl;
        cout<<"Students Percentage: "<<perc<<endl;
    }
};

