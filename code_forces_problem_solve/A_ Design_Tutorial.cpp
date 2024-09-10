#include<iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    if(num %2 == 0)
    {
        cout << (num-4)<< " " << 4 << endl;
    }
    else
    {
        cout << (num - 9) << " "  << 9  << endl;
    }
}
