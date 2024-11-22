#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        int cnt=0;
        for(int i=0;i<n-1;i++)
        {
            if(abs(v[i]-v[i+1])>1)
            {
                cout<<"YES"<<endl;
                cout<<cnt+1<<" "<<cnt+2<<endl;
                cnt++;
                break;
            }
        }
        if(cnt==0){
            cout<<"NO"<<endl;
        }
    }
}
