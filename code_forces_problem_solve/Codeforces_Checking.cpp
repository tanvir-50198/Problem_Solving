#include<iostream>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string s1="codeforces";
        char s;
        cin >>s;
        int cnt=0;

        for(int i=0;i<10;i++)
        {
            if(s1[i]==s){
                cnt++;
            }
        }
        if(cnt!=0){
            cout<<"yes"<<endl;
        }
        else cout<<"no"<<endl;

    }
}
