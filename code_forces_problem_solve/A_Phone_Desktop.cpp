#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
            int x,y;
            cin>>x>>y;
            int c=0;
            while(x>0||y>0)
            {
                if(y>=2)
                {
                    x-=7;
                    y-=2;
                    c++;
                }
                else if(y==1)
                {
                    x-=11;
                    y-=1;
                    c++;
                }
                else
                {
                    x-=15;
                    c++;
                }
            }

            cout<<c<<endl;
    }
}
