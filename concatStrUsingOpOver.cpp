#include<iostream>
#include<string.h>
using namespace std;
class strings
{
   char str[20];
   public:
         void input()
         {
             cout<<"enter the string:"<<endl;
             cin>>str;
         }
         void output()
         {
             cout<<"string is:"<<endl;
             cout<<str<<endl;
         }
         strings operator+(strings s)
         {
             strings temp;
             strcpy(temp.str,str);
             strcat(temp.str,s.str);
             return(temp);
         }
};
int main()
{
    strings s1,s2,s3;
    s1.input();
    s2.input();
    s3=s1+s2;
    s1.output();
    s2.output();
    s3.output();
    return 0;
}
