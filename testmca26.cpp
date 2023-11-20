#include<iostream>
using namespace std;
class base{

    private:
        int b;

};
class derived: private base{
    protected:
        int c;
};
int main(){
    //derived d;
    cout<<"\nSize of base class object is "<<sizeof(base)<<endl;
    cout<<"\nSize of derived class object is "<<sizeof(derived)<<endl;
    return 0;
}

//Private members are not inherited under any visibility mode

