#include<iostream>
using namespace std;
int main()
{
    int *p,*a;
    p=new int(20);
    cout<<"p="<<*p<<endl;
    delete p;
    
    a=new int[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<"a="<<a[i]<<endl;
    }
    delete []a;
    return 0;
}