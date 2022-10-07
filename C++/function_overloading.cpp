//function overloading 
#include <iostream>
using namespace std;
void show(void)
{
 cout<<"Function1"<<endl;   
}
void show(int i)
{
 cout<<"Function2"<<endl;   
}
void show(int i,float j)
{
 cout<<"Function3"<<endl;   
}
int main()
{
     show();
     show(20);
     show(20,4.5f);
     

    return 0;
}

