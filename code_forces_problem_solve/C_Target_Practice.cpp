#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
       int cnt=0;
       for(int i=0;i<10;i++)
       {
           string s;
           cin>>s;
           for(int j=0;j<10;j++)
           {
               if(s[j]=='X')
               {
                   if(i==0||i==9||j==0||j==9)cnt+=1;
                   else if(i==1||i==8||j==1||j==8)cnt+=2;
                   else if(i==2||i==7||j==2||j==7)cnt+=3;
                   else if(i==3||i==6||j==3||j==6)cnt+=4;
                   else if(i==4||i==5||j==4||j==5)cnt+=5;
               }
           }
       }
       cout<<cnt<<endl;
    }
}


