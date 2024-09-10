#include<bits/stdc++.h>
using namespace std;
int main ()
{


        vector<int>v={1,1,1,1,1};

        int x=1;
        map<int,int>m;
        for(int i=0;i<5;i++)
        {
            m[v[i]]++;
        }

        cout<<m[x];

    }

