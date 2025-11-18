
#include <bits/stdc++.h>
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x = 0;
        if (n % 2 == 0)
        {
            x = n / 2;
        }
        int y = 0;
        
        if (n % 3 == 0)
        {
            y = n / 3;
        }
        else
        {
            y = (n / 3);
            int s=y*3+2;
            int a=(y+1)*3-2;
            if((s==n || a==n) && n!=1){
                y+=1;
            }else{
                y+=2;
            }
        }
        if (x != 0)
        {
            cout << min(x, y) << '\n';
        }
        else
        {
            cout << y << '\n';
        }
    }

    return 0;
}