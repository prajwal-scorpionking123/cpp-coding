#include<iostream>
using namespace std;
template <class T>
T mymax(T x,T y)
{
    return (x>y)?x:y;
}
template <class T1>
void swapp(T1 &x,T1 &y)
{
    T1 temp;
    temp=x;
    x=y;
    y=temp;
}
int main()
{
    cout<<mymax<int>(3,7)<<endl;
    int a=12,b=10;
    cout<<"after swapp "<<endl;
    swapp(a,b);
    cout<<"a="<<a<<"b="<<b<<endl;
    return 0;
}