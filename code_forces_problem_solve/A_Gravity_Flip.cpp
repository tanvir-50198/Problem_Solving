#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >>t;
    int a[t];
    for (int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    int sz=sizeof(a)/sizeof(a[0]);
    sort(a,a+sz);
    for (int i=0;i<t;i++)
    {
        cout<<a[i]<<" ";
    }
}
