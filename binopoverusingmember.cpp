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
    complex operator+(complex c1)
    {
         complex temp;
         temp.x=x+c1.x;
         temp.y=y+c1.y;
         return temp;
    }
    void show()
    {
        cout<<x<<"+i"<<y<<endl;
    }
        
};

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