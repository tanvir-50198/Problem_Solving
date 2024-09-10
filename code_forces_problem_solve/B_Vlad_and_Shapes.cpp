#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];

            }

        }
        bool flag=false;
        for(int i=0,j=n;i<n;i++,j--)
        {
               if(a[i][j]==1&&a[i][j]==a[j][i])
                {
                    flag=true;
                    break;
                }
                else {
                flag=false;
                }

        }
        if(flag=true)cout<<"SQUARE"<<endl;
        else cout<<"TRIANGLE"<<endl;


    }

}
