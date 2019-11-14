#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"enter the 4 digit number:"<<endl;
    cin>>number;
    int rem,sum=0;
    while(number!=0)
    {
    rem=number%10;
    sum=sum+rem;
    number=number/10;
    
    }
    cout<<"sum of digits="<<sum;


    return 0;
}