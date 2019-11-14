#include<iostream>
#include<fstream>
#include<ostream>
using namespace std;
int main()
{
    ifstream fin;
    ofstream fout;
    fin.open("INFO.txt",ios::in);
    fout.open("INFO1.txt",ios::app);
    char ch,text[100];
    while(!fin.eof())
    {
        fin.get(ch);
        fout.put(ch);
    }
    fout.close();
     ifstream fi;
    cout<<"file after appended:"<<endl;
    fi.open("INFO1.txt",ios::in);
    while(fi)
    {
        fi.getline(text,100);
        cout<<text;
    }
        fout.close();
    fin.close();
    return 0;
}






















//    char name[20];
//     char city[20];
//     ofstream fout;
//     fout.open("INFO.txt",ios::out);
//     cout<<"enter the Name and address of the person:"<<endl;
//     cin>>name>>city;
//     fout<<name;
//     return 0;