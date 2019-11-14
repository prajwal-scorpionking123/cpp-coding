#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
class student
{
    int rollno;
    char name[20];
    int age;
    public:
           void getData()
           {
               cout<<"enter the roll no"<<endl;
               cin>>rollno;
               cout<<"enter the name of student:"<<endl;
               cin>>name;
               cout<<"enter the age of the student:"<<endl;
               cin>>age;
           }
           void showData()
           {
               cout<<setw(10)<<name;
               cout<<setw(10)<<rollno;
               cout<<setw(10)<<age<<endl;

           }
};
int main()
{
  student s1;
  fstream outfile;
  outfile.open("student",ios::ate|ios::app|ios::in|ios::out|ios::binary);
  outfile.seekg(0,ios::beg);
  s1.getData();
  outfile.write((char *)&s1,sizeof(s1));
  outfile.read((char *) &s1,sizeof(s1));
      s1.showData();
   return 0;
}