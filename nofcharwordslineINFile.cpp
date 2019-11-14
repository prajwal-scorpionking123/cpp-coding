#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("TEXT.txt");
    char ch;
    char word[40];
    char string[400];
    int ccount=0,wcount=0,lcount=0;
    while(!fin.eof())
    {
        fin.get(ch);
        ccount++;
    }
    fin.close();
   fin.open("TEXT.txt");
    while(!fin.eof())
    {
        fin>>word;
        wcount++;
    }
    fin.close();
    fin.open("TEXT.txt");
    while(!fin.eof())
    {
        fin.getline(string,400);
        lcount++;
    }
     ifstream fi;
     fi.open("TEXT.txt",ios::in);
    while(fi)
    {
        fi.getline(string,400);
        cout<<string;
    }
     cout<<"the number of chars:"<<ccount<<endl;
     cout<<"the number of words:"<<wcount<<endl;
     cout<<"the number of lines:"<<lcount<<endl;
    return 0;
}
