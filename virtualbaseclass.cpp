#include<iostream>
using namespace std;
class GRAND
{
    public:
           int g;
           int getG(){
               g=5000;
               return g;
           }
};
class parent1:virtual public GRAND
{
    public:
           int p1;
           int getP1(){
               p1=2000;
               return p1;
           }
};
class parent2:virtual public GRAND
{
    public:
           int p2;
           int getP2(){
               p2=2000;
               return p2;
           }
};
class child:public parent1,parent2
{
  public:
        void showProperties()
        {
            cout<<"from Grand Parent"<<getG()<<endl;
            cout<<"from Parent1"<<getP1()<<endl;
            cout<<"frome Parent2"<<getP2()<<endl;
        }
};
int main()
{
    child c;
    c.showProperties();
    return 0;
}