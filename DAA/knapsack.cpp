#include<iostream>
using namespace std;
void knapsack(int n,float weight[],float profit[],int capacity){
    float x[20],tp=0;
    int i,j,u;
    u=capacity;
    for(i=0;i<n;i++)
    x[i]=0.0;
    for(i=0;i<n;i++)
    {
        if(weight[i]>u)
        {
            break;
        }
        else
        {
            x[i]=1.0;
            tp=tp+profit[i];
            u=u-weight[i];
        }
    }
    if(i<n)
    x[i]=u/weight[i];

    tp=tp+(x[i]*profit[i]);
    cout<<"result vector is:-"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<x[i];
    }
    cout<<"max profit is :-"<<tp;
}
int main()
{
    float weight[20],profit[20],capacity;
    int num,i,j;
    float ratio[20],temp;
    cout<<"enter the number of objects"<<endl;
    cin>>num;
    cout<<"enter weights"<<endl;
    for(i=0;i<num;i++)
    {
      cin>>weight[i];
    }
     cout<<"enter profits"<<endl;
    for(i=0;i<num;i++)
    {
      cin>>profit[i];
    }
     cout<<"enter capacity:"<<endl;
      cin>>capacity;
      for(i=0;i<num;i++)
    {
      ratio[i]=profit[i]/weight[i];
    }
    for(i=0;i<num;i++)
    {
        for(j=i+1;i<num;i++)
        {
            if(ratio[i]<ratio[j])
            {
              temp=ratio[i];
              ratio[i]=ratio[j];
              ratio[j]=temp;

              temp=weight[i];
              weight[i]=weight[j];
              weight[j]=temp;

              temp=profit[i];
              profit[i]=profit[j];
              profit[j]=temp;
            }
        }
    }
 knapsack(num,weight,profit,capacity);
}