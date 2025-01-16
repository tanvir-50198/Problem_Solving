#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    vector<long long> v;
    for (long long i = 2; i * i <= n; ++i)
    {
        while (n % i == 0)
        {
            v.push_back(i);
            n /= i;
        }
    }
    if (n > 1)
    {
        v.push_back(n);
    }

    if(v.size()<k)cout<<-1<<endl;
    else if(v.size()==k) for(auto u:v)cout<<u<<" ";
    else
    {
        while (v.size() > k)
        {
            long long last = v.back();
            v.pop_back();
            v[v.size() - 1] = v[v.size() - 1] *last;
        }
        for (long long factor : v)
        {
            cout << factor << " ";
        }
        cout << endl;
    }
}
