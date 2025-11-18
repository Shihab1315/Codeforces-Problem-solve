
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
    while (t--) {
        vector<string> s(8);
        for (int i = 0; i < 8; i++) cin >> s[i];

        bool red = false;

       
        for (int i = 0; i < 8; i++) {
            if (s[i] == "RRRRRRRR") {
                red = true;
                break;
            }
        }

        if (red) cout << "R\n";
        else cout << "B\n";
    }
    return 0;
}