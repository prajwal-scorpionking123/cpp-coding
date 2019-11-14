#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
const char * filename="BINARY.txt";
int main()
{
    float height[4]={124,152,173,225};

    ofstream outfile;
    outfile.open(filename);
    outfile.write((char *) &height,sizeof(height));
    outfile.close();

    for(int i=0;i<4;i++)
    {
       height[i]=0;
    }
    ifstream infile;
    infile.open(filename);

    infile.read((char *) &height,sizeof(height));

    for(int i=0;i<4;i++)
    {
       cout.setf(ios::showpoint);
       cout<<setw(10);
       cout<<height[i];
    }
    infile.close();
    return 0;
}