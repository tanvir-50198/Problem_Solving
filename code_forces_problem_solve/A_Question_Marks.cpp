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
        string s;
        cin>>s;
        int cntA=0,cntB=0,cntC=0,cntD=0,cnts=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A')cntA++;
            if(s[i]=='B')cntB++;
            if(s[i]=='C')cntC++;
            if(s[i]=='D')cntD++;
        }
        if(cntA>=n)cnts+=n;
        else cnts+=cntA;
        if(cntB>=n)cnts+=n;
        else cnts+=cntB;
        if(cntC>=n)cnts+=n;
        else cnts+=cntC;
        if(cntD>=n)cnts+=n;
        else cnts+=cntD;

        cout<<cnts<<endl;
    }
}
