#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    vector<int>v1(t);
    for(int i=0;i<t;i++)
    {
        cin>>v1[i];
    }
    sort(v1.begin(),v1.end());
    int n;
    cin>>n;
    vector<int>v2(n);
    for(int i=0;i<n;i++)
    {
        cin>>v2[i];
    }
    sort(v2.begin(),v2.end());
    int x=max(t,n);
    int cnt=0;
     for(int i=0,j=0;i<x;i++,j++)
    {

        if(abs(v1[i]-v2[j])<=1)
        {
            cnt++;
            //cout<<i<<"  "<<j<<endl;
            if(i==t-1||j==n-1)break;
        }
        else
        {
            if(v1[i]<v2[j])
            {
                j-=1;
            }
            else{
                i-=1;
            }
        }
    }
    cout<<cnt<<endl;
}
