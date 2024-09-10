#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>v(3);
        for(int i=0;i<3;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int a,b,c;
        a=*v.begin();
        b=*(v.begin()+1);
        c=*(v.begin()+2);

        int sum=(b-a)+(c-b);
        cout<<sum<<endl;
    }
}
