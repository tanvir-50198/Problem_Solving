#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int cnt=0;
        int m[n];
         for(int i=0,j=n;i<n;j--,i++)
        {
           if(a[i]==1&&a[j]==1)
           {
               int m[i]=a[i];
                break;
           }
           for(int i=0;i<m.sizeof();i++)
        {
           if(n==0)
           {
                cnt++;
           }

        }

        cout<<cnt<<endl;
    }

}
