#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
       if(a==b&&b==c){
        cout<<"YES"<<endl;
        continue;
       }
       int ans=0;
       int x=min(a,min(b,c));
       if(a%x!=0||b%x!=0|c%x!=0)
       {
           cout<<"NO"<<endl;
           continue;
       }
       else
       {
           ans+=a/x-1;
           ans+=b/x-1;
           ans+=c/x-1;

       }
       if(ans<=3)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
}
