#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
    int a[n];
    int sum=0;
    for(int j=0;j<n;j++){
            cin>>a[j];
            sum+=a[j];
            }
    }
    for (int i=0;i<n;i++){

         if(a[i]==0||a[0]==1){
            cout<<"NO"<<endl;
        }
       else {
       if(sum%n==0){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }

       }
    }

}
