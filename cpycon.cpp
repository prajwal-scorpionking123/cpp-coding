#include<iostream>
using namespace std;
class Demo
{
    int x,y;
    public:
    Demo()
    {
        x=0;
        y=0;
    }
    Demo(int a,int b)
    {
        x=a;
        y=b;
        cout<<"inside parametrized"<<endl;
        cout<<"x="<<x<<""<<"y="<<y<<endl;
    }
    Demo(Demo &d)
    {
        x=d.x;
        y=d.y;
         cout<<"inside copy"<<endl;
        cout<<"x="<<x<<""<<"y="<<y<<endl;
    }
};
int main()
{
    Demo d1(3,3),d2(2,2),d3(d1);
    return 0;
}