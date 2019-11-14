#include<iostream>
using namespace std;
class StaticDemo
{
    
    public:
    static int a;
    static void count()
    {
        a++;
    }
    void showcount()
    {
        cout<<"count="<<a<<endl;
    }
};
int StaticDemo::a;
int main()
{
    StaticDemo s1,s2;
    s1.showcount();
    s2.showcount();
    StaticDemo::count();
    StaticDemo::count();
    s1.showcount();
    s2.showcount();

}