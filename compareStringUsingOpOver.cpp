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
         int operator==(strings s)
         {
             strings temp;
             strcpy(temp.str,str);
             int status=strcmp(temp.str,s.str);
             if(status>0)
             {
                 cout<<"string1 is greater"<<endl;
             }
             if(status<0)
             {
                 cout<<"string2 is greater "<<endl;
             }
             if(status==0)
             {
                 cout<<"strings are equal"<<endl;
             }
             return 0;
         }
};
int main()
{
    strings s1,s2,s3;
    s1.input();
    s2.input();
    cout<<"comparison output"<<endl;
    s1==s2;
    // s1.input();
    // s2.input();
    // s3=s1+s2;
    // s1.output();
    // s2.output();
    // s3.output();
    return 0;
}
