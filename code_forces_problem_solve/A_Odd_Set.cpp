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
        int m=2*n;
        int a[m];
        int cnt=0,cnt2=0;
        for(int i=0;i<m;i++)
        {
            cin>>a[i];
            if(a[i]%2==1){
                cnt++;
            }
            else{
                cnt2++;
            }
        }
        if(cnt==cnt2)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }

}
