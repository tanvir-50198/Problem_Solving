#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,cnt=0;
        cin>>a>>b;

            while(a<=b){
            a+=cnt;
            cnt++;
            }

        cout<<cnt-1<<endl;
    }


}
