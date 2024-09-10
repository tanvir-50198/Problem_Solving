#include<iostream>
using namespace std;
int main ()
{
    int m,n;
    cin>>m>>n;
    for(int j=1;j<=m;j++)
    if (j%2!=0)
    {
        for(int i=0;i<n;i++)
        {
            cout<<"#";
        }
        cout<<endl;
    }
    else
    {
        if((j/2)%2==0)
        {
            cout<<"#";


         for(int i=1;i<n;i++)
        {
            cout<<".";
        }
        }
        else
        {
         for(int i=0;i<n-1;i++)
        {
            cout<<".";
        }
        cout<<"#";

    }
    cout<<endl;
}
}
