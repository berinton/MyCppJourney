
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
        student(int a=0, int b=0, string c="null", string d="nodept");
        //Displaying default constructor
        /*student(){
            roll=0;
            ID=0;
            name="no name";
            dept="no department";
            cout<<"\nThis is DC\n";

        }*/
        void input();
        void display();
};
        //Parameterized constructor
        student::student(int a,int b, string c, string d){
            roll=a;
            ID=b;
            name=c;
            dept=d;
            //cout<<"\n This is PC\n";
        }
        void student::input()
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
        void student::display()
        {
           cout<<"\nRoll no: "<<roll;
           cout<<"\nID: "<<ID;
           cout<<"\nName: "<<name;
           cout<<"\nDepartment: "<<dept;
        }
int main()
{
    student b; //PC with DA
    student s(01,001,"Berry","CSE");//Implicit call to PC
    b.display();
    //student b=student(02,002,"Deba","CSE");//Explicit to OP
    s.display();

    //student c=b;
   // c.display();//member to member copy operation
    //student s;
    //s.display();
    //cout<<"\n\nEnter Student Details: "<<endl;
    //s.input();
    //cout<<"Displaying Student Details: "<<endl;
    //s.display();
    return 0;
}
