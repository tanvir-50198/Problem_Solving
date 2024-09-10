#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    map<string,string>mp;
  while(t--){
  string a,b;
  cin>>a>>b;
  if(mp.find(a)!=mp.end()){
    mp[b]=mp[a];
  }
  else{
  mp[b]=a;
  }
  mp.erase(a);
  }
  cout<<mp.size()<<endl;
  for(auto[a,b]:mp){
    cout<<b<<" "<<a<<endl;
  }


}
