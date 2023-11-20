#include<iostream>
using namespace std;
class A{
    public: int k,l;
        void values(){
            k=6;
            l=5;
        }
};
class B: public A{
    public:void add(){
        cout<<"The sum of k,l is: "<<k+1<<endl;
    }
};
class C: public A{
    public:void sub(){
            cout<<"The sub of k,l is: "<<k-1<<endl;
    }
};
class D: public A{
    public:void mul(){
            cout<<"The mul of k,l is: "<<k*l<<endl;
    }
};
int main(){
    B obj1;
    C obj2;
    D obj3;
    obj1.values();
    obj1.add();
    obj2.values();
    obj2.sub();
    obj3.values();
    obj3.mul();
    return 0;
}
