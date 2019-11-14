#include<iostream>
using namespace std;
template<class T>
void sorting(T a[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
}
template<class T>
void swap(T &a,T &b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int a[10],n=5;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sorting(a,5);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}