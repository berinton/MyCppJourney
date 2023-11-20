#include<iostream>
using namespace std;
int main()
    {
      // nothing
    int a=10;  //local variable of main function
    cout<<"Value of a is "<<a<<endl;     // a=10
       {
       cout<<"Value of a is "<<a<<endl;   // a=10
       int a=20;                          // a=20
       cout<<"Value of a is "<<a<<endl;   //a=20
       int b=20;                           //a=20 b=20
       cout<<"Value of b is "<<b<<<endl;    //a=20 b=20

       } //end of a=20 and b=20
    cout<<"Value of a is "<<a<<endl;  a=10
    return 0;
  }  // end of a=10
