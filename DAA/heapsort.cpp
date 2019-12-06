#include<iostream>
using namespace std;
#define MAX 100
void heapsort(int a[],int size);
void buildheap(int a[],int size);
void restordown(int a[],int i,int size);
int del_root(int a[],int *size);
void display(int a[],int n);
int main()
{
    int n,a[MAX];
    cout<<"enter the number of element:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cout<<"array before sorting:"<<endl;
    display(a,n);
    heapsort(a,n);
    cout<<"array after sorting:"<<endl;
    display(a,n);
}
void display(int a[],int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<endl;
    }
}
void heapsort(int a[],int size)
{
    int max;
    buildheap(a,size);
    cout<<"heap is:"<<endl;
    display(a,size);
    while(size>1)
    {
        max=del_root(a,&size);
        a[size+1]=max;
    }
}
void buildheap(int a[],int size)
{
    int i;
    for(int i=size/2;i>=1;i--)
    {
       restordown(a,i,size);
    }
}
int del_root(int a[],int *size)
{
    int max=a[1];
    a[1]=a[*size];
    restordown(a,1,*size);
    (*size)--;
    return max;
}
void restordown(int a[],int i,int size)
{
    int left=2*i,right=left+1;
    int num=a[i];
    while(right<=size)
    {
        if(num>=a[left]&&num>=a[right])
        {
            a[i]=num;
            return;
        }
        else if(a[left]>a[right]){
            a[i]=a[left];
            i=left;
        }
        else
        {
            a[i]=a[right];
            i=right;
        }
        left=2*i;
        right=left+1;
        
    }
    if(left==size && num<a[left])//when right==size+1
    {
        a[i]=a[left];
        i=left;
    }
    a[i]=num;
}
