#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int l=max(a,b);
        int w=min(a,b)*2;
        int s=0;
        if(l>w)
        {
            cout<<l*l<<endl;
        }
        else{
         cout<<w*w<<endl;
        }
    }
}
