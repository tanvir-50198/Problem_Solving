#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b;
    cin>>a>>b;
    int c=240-b;
    int x=0,y=0;
    for(int i=1;i<=a;i++)
    {
        x+=i*5;
        if(x<=c)y++;
    }
    cout<<y<<endl;
}
