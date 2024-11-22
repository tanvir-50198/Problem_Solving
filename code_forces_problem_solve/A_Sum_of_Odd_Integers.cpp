#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int n=sqrt(x);
        if(y<=n)
        {
            if(y%2==0)
            {
                if(x%2==0)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            else
            {
                if(x%2!=0)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
        else cout<<"NO"<<endl;

    }
}
