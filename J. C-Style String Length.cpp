
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
    int T;
    cin >> T;

    while (T--) {
        string S;
        cin >> S;

        long long len = 0;
        bool invalid = false;

        for (size_t i = 0; i < S.size(); ) {
            if (S[i] == '0') {
                len++;
                i++;
            } else { // S[i] == '\'
                if (i + 1 >= S.size()) {
                    invalid = true; 
                    break;
                }
                if (S[i + 1] == '\\') {
                    len++;
                    i += 2;
                } else { 
                   
                    break;
                }
            }
        }

        if (invalid)
            cout << "INVALID\n";
        else
            cout << len << "\n";
    }

    return 0;
}