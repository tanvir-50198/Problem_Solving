#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t1,t2;
    cin>>t1>>t2;
    map<string,string>m;

    for(int i=0;i<t1;i++)
    {
        string s1,s2;
        cin>>s1>>s2;
        m[s2]=s1;
    }

    for(int i=0;i<t2;i++)
    {
        string s3,s2;
        cin>>s3>>s2;
        s2.pop_back();
        cout<<s3<<" "<<s2<<"; #"<<m[s2]<<endl;
    }




}
