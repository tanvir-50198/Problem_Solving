#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
   while(t--){
    int n;
    cin>>n;
    vector<string>v;
    int cnt=-1,cnt2=0;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        for(int j=0;j<n;j++)
        {
            if(s[j]=='1')
            {
                if(cnt==j)
                {
                    cnt2++;

                }
                else
                {
                    cnt=j;
                    break;
                }

            }

        }
    }
            if(cnt2>0)cout<<"SQUARE"<<endl;
            else cout<<"TRIANGLE"<<endl;

    }
}

