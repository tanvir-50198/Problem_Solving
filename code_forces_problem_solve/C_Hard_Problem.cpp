#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long m,a,b,c;
        cin>>m>>a>>b>>c;
         long long m1=0,m2=0;
        m1+=min(m,a);
        m2+=min(m,b);
        cout<<m1+m2+min(c,m-m1+m-m2)<<endl;
    }
}
