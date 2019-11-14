#include<iostream>
using namespace std;
class alpha
{
    int a;
    public:
           alpha(int x)
           {
               a=x;
           }
           void show()
           {
               cout<<"a="<<a<<endl;
           }
};
class beta
{
    alpha a;
    int b;
    public:
           beta(int x,int y):a(x)
           {
             b=y;
             cout<<"b="<<b<<endl; 
             a.show();
           }
};
int main()
{
    beta b(3,4);
    return 0;
}