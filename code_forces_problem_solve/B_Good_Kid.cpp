#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long sum=1;
        vector<long long>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i])
            sum*=v[i];
        }
        sort(v.begin(),v.end());
        sum=sum/v[0];
        v[0]+=1;
        sum=sum*v[0];
        cout<<sum<<endl;

    }
}
