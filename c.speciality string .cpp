
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

    while(t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        stack<char> st;

        for(char c : s) {
            if(!st.empty() && st.top() == c) {
                st.pop();   
            } else {
                st.push(c);
            }
        }

        if(st.empty())
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}