#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row = 5, col = 5;
    int arr[6][6];

    int x;
    for(int i = 1; i <= row; i++)
    {
        for(int j = 1; j <= col; j++)
        {
            cin >> x;

            arr[i][j] = x;
        }
    }

     int ans = 0;
     for(int i = 1; i <= row; i++)
    {
        for(int j = 1; j <= col; j++)
        {

            if(arr[i][j] == 1)
            {
                ans = abs(i-3)+abs(j-3);
                cout << ans << endl;
                break;
            }

        }
    }



}
