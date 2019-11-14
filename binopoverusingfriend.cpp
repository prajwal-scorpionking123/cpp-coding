#include<iostream>
using namespace std;
class complex
{
    float x;
    float y;
    public:
    void getdata(int a,int b)
    {
        x=a;
        y=b;
    }
    friend complex operator+(complex c1,complex c2);
    void show()
    {
        cout<<x<<"+i"<<y<<endl;
    }
        
};
complex operator+(complex c1,complex c2)
{
    complex c3;
    c3.x=c1.x+c2.x;
    c3.y=c1.y+c2.y;
    return c3;
}
int main()
{
    complex c1,c2,c3;
    c1.getdata(3,2);
    c2.getdata(4,2);
    c3=c1+c2;
    c1.show();
    c2.show();
    c3.show();
    return 0;
}