#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,cnt=0;
        cin>>x>>y;
        if(x>=y)
        {
            cout<<x<<endl;
            continue;
        }
        else if(x*2<y)
        {
            cout<<0<<endl;
            continue;
        }


    else
    {
        int n=y-x;
        cout<<x-n<<endl;
    }
    }
}
