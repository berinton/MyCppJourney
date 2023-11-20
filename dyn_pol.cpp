#include<iostream>
using namespace std;
class student
{
        public:
            char Name[20];
            int age;
            int roll;
        student()
        {
            age=25;
        }
        //virtual void display()=0;
        virtual void display(){
            cout<<"\n Age: "<<age;
        }
};
class player: public student{
    public:
        int jersey;
        player(){
            jersey=10;
        }
        void display(){
            student::display();
            cout<<"\n Jersey: "<<jersey<<endl;
        }
};
class singer:public student{
    public:
        int NoOfAlbums;
        singer():NoOfAlbums(500)
        {

        }
        void display(){
            student::display();
            cout<<"\n Albums: "<<NoOfAlbums<<endl;
        }
};
int main(){
    student *s[2]; //  array of pointers to base class objects s[0], s[1]
    int choice;
   // i=5;
   // cout<<i++;
    for(int i=0;i<2;++i){
        cout<<"Enter your choise 0:Singer and 1:Player  ";
        cin>>choice;
        switch(choice){
            case 0: s[i]=new singer;
                    s[i]->display();
                    break;
            case 1: s[i]=new player;
                    s[i]->display();
                    break;
            default:
                    cout<<"Wrong Input.\n";
                    i--;
        }//end of switch
    }//end of for
    for(int i=0;i<2;++i)
    {
        delete s[i];
    }
    return 0;
}//end of main
