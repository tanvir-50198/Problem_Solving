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
        if (x>y)
        {
            if(x/2>=y)
                {
                cout<<x*x<<endl;
            }
            else
            {
                int c=x+1;
                c*=c;
                cout<<c<<endl;
            }

        }
        else if (y>x)
        {
            if(y/2>=x)
            {
                cout<<y*y<<endl;
            }
            else
            {
                int c=y+1;
                c*=c;
                cout<<c<<endl;
            }
        }
        else
        {
            int z=x*2;
            cout<<z*z<<endl;
        }
    }
}



