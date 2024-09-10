#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
   while(t--){
    long long n,sum=0;
    cin>>n;

        for(int i=1;i<=n;i++)
        {
            if(i>9)
            {
                int x=i;
                sum+=(x%10)+1;
            }
            else
            {
                sum+=i;
            }
        }
        cout<<sum<<endl;

    }
}

