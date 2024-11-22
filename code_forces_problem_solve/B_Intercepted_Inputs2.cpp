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
        vector<long long>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        long long x=n-2;
       // bool cnt=false;
        sort(v.begin(),v.end());
        int l=0,r=n-1;
        while (l < r) {
            long long y = v[l] * v[r];

            if (y == x)
                {
                cout << v[l] << " " << v[r] << endl;
               // cnt = true;
                break;
            }
            else if (y < x) {
                l++;
            }
            else {
                r--;
            }
        }

    }

}
