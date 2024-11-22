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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());
        for(int i=1;i<n;i+=2)
        {
            int x = v[i-1]-v[i];
            if (x <= k)
            {
                v[i] += x;
                k -= x;
            }
            else
            {
                v[i] += k;
                k = 0;
            }
        }
        int sum1=0,sum2=0;
        sort(v.rbegin(),v.rend());
        for(int i=0;i<n;i++)
            {
                if(i%2==0)
                {
                    sum1+=v[i];
                }
                else
                {
                    sum2+=v[i];
                }
            }
            cout<<sum1-sum2<<endl;
    }
}
