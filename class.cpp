#include<iostream>
using namespace std;
class employee{
   private:
        int ID;
        string name;
        float salary;
        int phone;
   public:
       student(){
            ID=00;
            name="ABC";
            salary='0';
            phone=00;
       }
        void input(){
            cout<<"Enter Employee ID: "<<endl;
            cin>>ID;
            cout<<"Enter Employee name: "<<endl;
            cin>>name;
            cout<<"Enter Employee salary: "<<endl;
            cin>>salary;
            cout<<"Enter Employee Phone number: "<<endl;
            cin>>phone;
        }
        void display(){
            cout<<"Employee ID: "<<ID<<endl;
            cout<<"Employee Name: "<<name<<endl;
            cout<<"Employee Salary: "<<salary<<endl;
            cout<<"Employee PhoneNo: "<<phone<<endl;
        }
};
int main(){
    employee x;
    x.display();
    x.input();
    x.display();
    return 0;
}
