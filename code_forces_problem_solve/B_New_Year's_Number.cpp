#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int c=0;
       for (int i=0;i<=n/2020;i++)
        {
            if ((n-i*2020)%2021==0) c++;
        }
        if (c>0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}

