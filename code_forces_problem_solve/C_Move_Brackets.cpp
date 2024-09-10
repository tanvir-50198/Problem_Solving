#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int n;
        cin>>n;
        cin>>s;
        int cnt=0,temp=0;
        for(int i=0;i<n-1;i++)
        {
           if (s[i] != '(') temp --;
            else temp ++;
            if (temp < 0) {
                cnt ++;
                temp = 0;
        }
    } cout<<cnt<<endl;
}
}
