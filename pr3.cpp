#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"enter the 4 digit number:"<<endl;
    cin>>number;
    int rem,rev=0;
    while(number!=0)
    {
     rem=number%10;
     rev=rev*10+rem;
     number=number/10;
    
    }
    cout<<"rev of digits="<<rev;


    return 0;
}