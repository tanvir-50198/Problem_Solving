#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {
    optimize();
    int t;
    cin >> t;

    while (t--) {
        int n,k;
        cin >> n >>k;
        vector<int> v(n), b(n);
        int cnt=0,cnt2=0;
        for (int i = 0; i < n; i++) cin >> v[i];
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                int cnt3=0;
                int x=abs(v[i]-v[j]);
                if(x%k!=0)
                {
                cnt++;
                cnt2=i;
                cnt3++;
                break;
                }
                if(cnt3>0)break;
            }
        }
        if(cnt>0)cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            cout<<cnt2+1<<endl;
        }




    }

    return 0;
}
