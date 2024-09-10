#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    int a[t];
    int sum=0;
    int sum2=0;
    int cnt=0;
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
        sum+=a[i];

    }
    sum=sum/2;
    sort(a,a+t);

    for(int i=t-1;i>=0;i--)
    {
        sum2+=a[i];
        cnt++;
        if(sum2>sum)
        {
            break;
        }
    }
    cout<<cnt;
}
