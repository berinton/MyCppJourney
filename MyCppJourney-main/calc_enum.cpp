#include<iostream>
using namespace std;
int num1, num2;   //global variables
void add()
     {
       cout<<"\n Enter two integers :"<<endl;
       cin>>num1>>num2;
       cout<<"\n Sum is "<<num1+num2<<endl;
       //return;
     }

void sub()
     {
       cout<<"\n Result of subtraction is "<<num1-num2<<endl;
     }

void mul(int number1,int number2)   // formal parameters
      {
        cout<<"\n Product is "<<number1*number2<<endl;
      }

float divi(int number1,int number2)
      {
        //float temp;
        //temp=(float)number1/number2;
        return (float)number1/number2;//temp;//explicit type casting
      }

int main()
   {
   //char choice;
   int choice;
   int n1,n2;  //local variables
   enum operations{ad=1,sb,ml,dv,mdl,ex};
   while(1)
        {
          cout<<"-----MENU-------"<<endl;
          cout<<"press 1 for addition"<<endl;
          cout<<"press 2 for subtraction"<<endl;
          cout<<"press 3 for multiplication"<<endl;
          cout<<"press 4 for division"<<endl;
          cout<<"press 5 for modulo operation"<<endl;
          //cout<<"press e for exit"<<endl;
          cout<<"press 6 for exit"<<endl;
          cin>>choice;

          switch(choice)
              {
                case ad: add();
                          break;
                case sb: cout<<"\n Enter two integers :"<<endl;
                          cin>>num1>>num2;
                          sub();
                          break;
                case ml: cout<<"\n Enter two integers :"<<endl;
                          cin>>n1>>n2;
                          mul(n1,n2);  // actual parameters
                          break;
                case dv: cout<<"\n Enter two integers :"<<endl;
                          cin>>n1>>n2;
                          //float result;
                          //result=divi(n1,n2);
                          cout<<"\n Result of division is "<<divi(n1,n2)<<endl;
                          break;
                case mdl: cout<<"\n Enter two integers :"<<endl;
                          cin>>num1>>num2;
                          cout<<"\n Remainder is "<<num1%num2<<endl;
                          break;
                case ex: cout<<"\n THANK YOU"<<endl;
                          return 0;
                default:  cout<<" \n WRONG INPUT"<<endl;
              }  // end of switch
        }// end of while
    return 0;
  }  // end of main



/*
   -----MENU-------
press 1 for addition
press 2 for subtraction
press 3 for multiplication
press 4 for division
press 5 for modulo operation
press e for exit

1

Enter two integers
12
30

the result is 42

-----MENU-------
press 1 for addition
press 2 for subtraction
press 3 for multiplication
press 4 for division
press 5 for modulo operation
press e for exit
e
Thank You
   */
