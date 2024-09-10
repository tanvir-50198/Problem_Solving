#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    int one=0,two=0,three=0,four=0,x=0;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        if(m==1)one++;
        if(m==2)two++;
        if(m==3)three++;
        if(m==4)four++;
    }
    //cout<<four<<endl;
    while(one!=0&&three!=0)
    {
        one--;
        three--;
        four++;
    }
   // cout<<three<<"  "<<one;
   while(three!=0)
   {
       three--;
       four++;
   }
   x=two*2+one;
   if(x%4==0)
   {
       four+=x/4;
   }
   else
   {
       if(x!=0)
       {
           four++;
           four+=x/4;
       }

   }
   cout<<four<<endl;
}
