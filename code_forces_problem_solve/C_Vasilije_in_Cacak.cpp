#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {

        long long x;
        int n,k;
        cin>>n>>k>>x;
        long long sum=0,sum2=0;


            for(int i=k;i>=1;i--)
            {
                sum+=n;
                n--;
            }

            for(int i=0;i<=k;i++)
            {
                sum2+=i;
            }

            if(sum>=x&&sum2<=x)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }

    }
}
