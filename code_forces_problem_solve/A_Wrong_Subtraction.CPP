#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,y;
    cin>>x>>y;

    while(y--)
    {
        if (x%10!=0)
        {
            x-=1;
        }
        else
        {
            x/=10;
        }
    }
    cout<<x<<endl;
}
