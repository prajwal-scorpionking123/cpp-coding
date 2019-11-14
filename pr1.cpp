#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3,n4,sum;
    float avg;
    cout<<"enter the four nnumber"<<endl;
    cin>>n1>>n2>>n3>>n4;
    sum=n1+n2+n3+n4;
    avg=sum/4;
    cout<<"sum="<<sum<<endl;
    cout<<"average="<<avg<<endl;
    return 0;
}