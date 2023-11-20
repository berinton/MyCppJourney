/*Write a c++ program to save student details in a class object
architecture with necessary input and output functions,
use default constructor to initialize student details*/

#include<iostream>
using namespace std;
class student
{
    private:
            int roll;
            int ID;
            string name;
            string dept;
    public:
        //Displaying default constructor
        student(){
            roll=0;
            ID=0;
            name="no name";
            dept="no department";
            cout<<"\nThis is DC\n";
        }
        ~student();//destructor
        //Parameterized constructor
        student(int a,int b, string c, string d){
            roll=a;
            ID=b;
            name=c;
            dept=d;
            cout<<"\n This is PC\n";
        }
        void input()
        {
           cout<<"Enter Roll no: ";
           cin>>roll;
           cout<<"Enter ID no: ";
           cin>>ID;
           cout<<"Enter Student name: ";
           cin>>name;
           cout<<"Enter Student Dept: ";
           cin>>dept;
        }
        void display()
        {
           cout<<"\nRoll no: "<<roll;
           cout<<"\nID: "<<ID;
           cout<<"\nName: "<<name;
           cout<<"\nDepartment: "<<dept;
        }
};
int main()
{
    student s(01,001,"Berry","CSE");//Implicit
    s.display();
    student b=student(02,002,"Deba","CSE");//Explicit
    b.display();

    student c=b;
    c.display();//member to member copy operation
    //student s;
    s.display();
    cout<<"\n\nEnter Student Details: "<<endl;
    s.input();
    cout<<"Displaying Student Details: "<<endl;
    s.display();
    return 0;
}
