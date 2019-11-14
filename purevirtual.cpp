#include<iostream>
using namespace std;
class A
{
    public:
    void virtual areaA(int r)=0;
};
class B:public A
{
    float area;
    int r;
    public:
    void areaA(int r)
    {
        this->r=r;
        area=3.14*r*r;
    }
    void show()
    {    
        cout<<"area="<<area;
    }
};
int main()
{
    B b;
    b.areaA(3);
    b.show();
}
