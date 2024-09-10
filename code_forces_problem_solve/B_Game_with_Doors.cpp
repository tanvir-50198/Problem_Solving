#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,x,y,cnt=0;
        cin>>a>>b>>x>>y;
        if((y-x)>(b-a))
        {
            swap(x,a);
            swap(y,b);
        }
        for(int i=a;i<=b;i++)
        {
            for(int j=x;j<=y;j++)
            {
                if(i==j)cnt++;
            }
        }
        if(a==x&&b==y)cout<<cnt-1<<endl;
        else if(a!=x&&b!=y)cout<<cnt+1<<endl;
        else cout<<cnt<<endl;
    }
}
