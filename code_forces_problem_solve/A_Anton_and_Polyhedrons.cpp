#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    string s;
    int sum=0;
    while(t--)
    {
        cin>>s;
        if(s=="Tetrahedron"){
            sum+=4;
        }
        if(s=="Cube"){
            sum+=6;
        }
        if(s=="Octahedron"){
            sum+=8;
        }
        if(s=="Dodecahedron"){
            sum+=12;
        }
        if(s=="Icosahedron"){
            sum+=20;
        }

    }
    cout <<sum;
}
