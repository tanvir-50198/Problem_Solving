#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int x[a];
    int cnt=0;
    for(int i=0;i<a;i++)
    {
        cin>>x[i];
        if (x[i]<b||x[i]==b)
        {
            cnt++;
        }
        else
        {
            cnt++;
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
