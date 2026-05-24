#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
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
        char ch;

        cin >> n >> ch;

        string s;
        cin >> s;

        if(ch == 'g'){
            cout << 0 << '\n';
            continue;
        }

        s += s;

        vector<int> g;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'g'){
                g.push_back(i);
            }
        }

        int mx = 0;

        for(int i = 0; i < n; i++){

            if(s[i] == ch){

                auto it = lower_bound(g.begin(), g.end(), i);

                mx = max(mx, (*it - i));
            }
        }

        cout << mx << '\n';
    }

    return 0;
}