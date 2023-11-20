//destructor
// this program shows how destructor is called
// every time the scope of an object ends

#include<iostream>
using namespace std;
class student
         {
          private:
                  string name;
                  int age;
                  float perc;
                  char bg;
        public:
                void input(string a)
                    {
                      name=a;
                    }
                student(void);     // DEFAULT CONSTRUCTOR
               ~student();    //DESTRUCTOR
         };
        student::student()   //default constructor definition
           {
           name="No Name";
           age=0;
           perc=0.0;
           bg='X';

           cout<<"\n Object created by Constructor"<<endl;
           }

	student::~student()   // destructor definition
           {
           cout<<"\n Object deleted by Destructor "<<name<<" "<<endl;
           }
int main()
   {
    cout<<"\n Inside MAIN for a,b creation\n";
    student a,b;
    a.input("A");
    b.input("B");
	     {
        cout<<"\n Inside BLOCK-1 for c creation\n";
        student c;
        c.input("C");
        cout<<"\n End of  BLOCK-1 deleteing c\n";
        }    // destructor called here to delete object c
    cout<<"\n Back to MAIN for d creation\n";
    student d;
    d.input("D");
        {
        cout<<"\n Inside BLOCK-2 for e,f creation\n";
        student e,f;
        e.input("E");
        f.input("F");
        cout<<"\n End of  BLOCK-2 deleteing e,f\n";
        }		// destructor called here to delete object e,f
    cout<<"\n Back to MAIN \n";
    cout<<"\n End of  MAIN deleteing a,b,d\n";
    return 0;  // destructor called here to delete object a,b,d
    }
