#include<bits/stdc++.h>
using namespace std;
int main()
{
std::ios::sync_with_stdio(false);
std::cin.tie(0);

    int t;
    cin>>t;
    while (t--)
    {
        int n,k,mx=0;
        cin>>n>>k;

        for(int i=0,x;i<n;i++)
        {
            cin>>x;
            mx=max(x,mx);
        }
        while(k--)
        {
            char s;
            int a,b;
            cin>>s>>a>>b;
                if(mx>=a&&mx<=b)
                {
                    if(s=='+')mx++;
                    else if(s=='-')mx--;
                }
            cout<<mx<<" ";
        }
        cout<<endl;
    }
}
