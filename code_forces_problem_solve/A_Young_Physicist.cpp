#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    int sum =0;
    int sum2 =0;
    int sum3 =0;

    for(int i=0;i<t;i++)
        {
        int x,y,z;
        cin>>x>>y>>z;
           sum+=x;
           sum2+=y;
          sum3+=z;
        }
        if(sum==0&&sum2==0&&sum3==0)cout<<"yes"<<endl;
        else cout<<"NO"<<endl;

}


