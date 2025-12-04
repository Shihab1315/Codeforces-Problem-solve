
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
        string s;
        cin >> s;
        map<char,int> mp;
        bool ft = false;
        mp[s[0]]++;
        for (int i = 1; i < n; i++)
        {
            if ((mp[s[i]]>=1) && (i!=n-1))
            {
                ft = true;
                break;
            }
            if(i!=n-1){
               mp[s[i]]++;
            }
            
        }
        if(ft==false && mp[s[n-1]]>=1){
            if(s[0]!=s[n-1]){
                ft=true;
            }
        }
        if (ft == true)
        {
            yes;
        }
        else
        {
            no;
        }
    }

    return 0;
}