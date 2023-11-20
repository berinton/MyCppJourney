#include<iostream>
using namespace std;
class Base
{
    private:
        int a;
    protected:
        int b;
    public:
        int c;
    Base(){//Default Constructor
            a=11;
            b=22;
            c=33;
        }
    void displayB(){
        //cout<<"\n a= "<<a<<endl;
        cout<<"\n b= "<<b<<endl;
        cout<<"\n c= "<<c<<endl;
    }
};
class Derived: private Base
{
    private:
        int d1;
    protected:
        int d2;
    public:
        int d3;
    Derived(){//Default constructor
            d1=44;
            d2=55;
            d3=66;
    }
    void display(){
        displayB();
        //cout<<"\n"<<a<<endl;
        cout<<"\n"<<" "<<b<<" "<<c<<endl;
        cout<<"\n"<<" "<<d1<<" "<<d2<<" "<<d3<<endl;
    }
};
int main(){
    Derived obj1;
    obj1.display(); //member function of derived
    //obj1.displayB();
    return 0;
}
