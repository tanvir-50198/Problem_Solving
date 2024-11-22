#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt0=0;
        int cnt1=0;
        for(int i=0;i<2*n;i++){
            int x;
            cin>>x;
            if(x==1)
                cnt1++;
            else
                cnt0++;
        }

        cout<<cnt0%2<<' '<<min(cnt0,cnt1)<<endl;
    }


}
