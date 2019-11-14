#include<iostream>
using namespace std;
class opover
{
    int x,y;
    public:
    void getdata()
    {
        x=10;
        y=20;
    }
    void operator -()
    {
        x=-x;
        y=-y;
    }
    void showdata()
    {
        cout<<"x="<<x<<endl;
        cout<<"y="<<y<<endl;
    }
};
int main()
{
    opover o1;
    o1.getdata();
    -o1;
    o1.showdata();
}