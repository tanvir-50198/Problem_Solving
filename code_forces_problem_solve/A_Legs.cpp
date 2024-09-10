#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long a,b;
        cin>>a>>b;
        long long arr[a][a];
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<a;j++)
            {
                cin>>arr[i][j];
            }
        }
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<a;j++)
            {
                cout<<arr[i][j];
            }
            cout<<endl;
        }
    }
}
