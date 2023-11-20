#include<iostream>
using namespace std;
class length{
public:
    int milimeter;
    int centimeter;
    int meter;

    length():milimeter(0),centimeter(0),meter(0){}

    //length operator++();
    //void operator++();
    length operator++(int);
    void display();
};
void length::display(){
    cout<<"Length is : "<<meter<<" meter ";
    cout<<centimeter<<" cm "<<milimeter<<" mm " <<endl;
}
length length::operator++(int unused){
    //length temp = *this;
    milimeter++;
    if(milimeter==100)
    {
        centimeter ++;
        milimeter=0;
    }
    if(centimeter==100){
        meter++;
        centimeter=0;
    }
    return *this;
}
int main(){
    length l1, l2, l3;
    l1.display();
    l1.milimeter=12;
    l1.centimeter=99;
    l1.meter=55;
    l2.milimeter=99;
    l2.centimeter=99;
    l2.meter=55;
    l1=l1++;
    l1.display();
    l2=l2++;
    l2.display();
    l3=l3++;
    l3.display();
    return 0;
}
