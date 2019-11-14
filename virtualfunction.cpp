#include<iostream>
using namespace std;
class Base
{
    public:
    virtual void show()
    {
        cout<<"hello Base"<<endl;
    }
};
class Derived:public Base
{
    public:
    void show()
    {
        cout<<"hello New"<<endl;
    }
};
int main()
{
    Derived d;
    Base *ptr,B;
    ptr=&B;
    ptr->show();
    ptr=&d;
    ptr->show();
    return 0;
}