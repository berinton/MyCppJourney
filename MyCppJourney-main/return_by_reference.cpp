//aim of the program to save -1 to max of a and b
#include<iostream>
using namespace std;

int  max1(int x,int y) //call by value... it works on copy of data
       {
         if(x>y)
     				return x;  // returns value of x
     		else
     				return y;  // returns value of y
		   }

int  max2(int x,int y) //call by reference... it works on actual data
      {
        if(x>y)
             return x;  // returns value of x
        else
             return y;  // returns value of y
       }


int & max3(int &x, int &y)	//return by reference...it also works on actual data
		{
		if(x>y)
				return x;  // returns address of x
		else
				return y;  // returns address of y
		}

int main()
		{
    int maximum;

	  int a=12;    //&0xae345=-1
		int b=10;

    // call by value and call by reference .... can not return address of variable
		maximum=max1(a,b);   //OR// maximum=max2(a,b);  //line 1
    if(maximum==a)    // line 2
        a=-1;       //line 3
    else if(maximum==b)  // line 4
        b=-1;  //line 5
    cout<<"\n Value of a= "<<a<<" Value of b= "<<b<<endl;

    a=12;
    b=10;
    //call to return by reference is allowed on left hand side of = operator
		max(a,b) = -1;   // this one line is equivalent to above 5 lines
    // and it doesnot require an extra varible "maximum" to save result
		cout<<"\n Value of a= "<<a<<" Value of b= "<<b<<endl;
		return 0;
	  }


/*
however, we can achieve the this program's task via call by reference in a simpler always
NOTE: return type is "void" here
void  max2(int x,int y) //call by reference... it works on actual data
      {
        if(x>y)
             x=-1;
        else
             y=-1;
       }
*/
