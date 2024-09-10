#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,cnt=0;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        for(int i=0;i<n;i++)
        {
             if (s1[i] == 'x' && s1[i+1] == '.' && s1[i+2] == 'x')
                {
                if (s2[i] == '.' && s2[i+1] == '.' && s2[i+2] == '.')
                cnt++;
                }
            else if (s2[i] == 'x' && s2[i+1] == '.' && s2[i+2] == 'x')
                {
                if (s1[i] == '.' && s1[i+1] == '.' && s1[i+2] == '.')
                cnt++;
                }
        }
        cout<<cnt<<endl;
    }
}
