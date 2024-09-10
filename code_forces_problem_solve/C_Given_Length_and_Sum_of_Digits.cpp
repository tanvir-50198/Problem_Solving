#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,s;
    cin>>m>>s;
    if(s%2==0)
    {
    int n=s/2;
    int a=9-n;
    int b=abs(1-n);
    if(a<b)cout<<n-a<<n+a<<" "<<n+a<<n-a<<endl;
    else cout<<n-b<<n+b<<" "<<n+b<<n-b<<endl;
    }
    else
    {
    int n=s/2;
    int a=(9-n);
    int b=abs(1-n);
    if(a<b)cout<<(n-a)+1<<n+a<<" "<<n+a<<(n-a)+1<<endl;
    else cout<<n-b<<n+b<<" "<<n+b<<n-b<<endl;
    }


}
