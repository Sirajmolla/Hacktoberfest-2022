//use of static data member and member function
#include <iostream>
using namespace std;
class student
{
    int roll;
    float avg;
    static int k; //static data member
    public:
    void get()
    {
        cout<<"enter the roll average ";
        cin>>roll>>avg;
        k = k+1;
    }
    void show()
    {
        cout<<"roll = "<<roll<<" Average mark = "<<avg<<" k = "<<k<<endl;
    }
    static void display() //static member function..It can access only static data
    {
        cout<<"k = "<<k<<endl;
        //cout<<"roll = "<<roll<<endl;// error static can not access non static data
    }
};
int student::k;//static data member defined here..initial default value is zero

int main()
{
   student s1,s2;  
   s1.get();
   s2.get();
   s1.show();
   s2.show();
   student::display(); //calling static member function using class name and scope resolution operator

    return 0;
}

