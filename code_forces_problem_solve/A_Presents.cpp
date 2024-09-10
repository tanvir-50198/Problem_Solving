#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    int indx=1;
     for(int i=0;i<t;i++)
    {
        for(int j = 0; j < t; j++)
        {
            if(indx==a[j]){
                cout<< j+1 <<"  ";
                indx++;
            }
        }
    }
}
