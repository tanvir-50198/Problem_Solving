#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<(1<<n)<<endl;
    int c=0,f=1;
    for(int i=0;i<(1<<n);i++)
        {
        for(int j=0;j<n;j++)
        {
            if(i & 1<<j)
            {
                int x=i&1<<j;
                cout<<v[j]<<"  "<<x<<endl;

                c+=v[j];
            }
            else
            {
                int x=i&1<<j;
                cout<<v[j]<<"  "<<x<<endl;
                c-=v[j];
            }
        }
        if(c%360==0)
        {
            cout<<"YES"<<endl; f=0;

        }
        c=0;
    }
    if(f){
        cout<<"NO";
    }
}
