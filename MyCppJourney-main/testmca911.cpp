#include<iostream>
using namespace std;
int i;
template <class T>
void display(){
    T value;
    cout<<"\nEnter the Value: ";
    cin>>value;
    for(i=0;i<=4;i++){
        cout<<"The Value is : "<<value<<endl;
    }
}
int main(){
    display<int>();
    display<char>();
    display<float>();
    display<string>();
    return 0;
}
