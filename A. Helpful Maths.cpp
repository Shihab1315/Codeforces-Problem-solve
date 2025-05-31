
#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s,h;
    cin>>s;
    for (char c : s) {
        if (c != '+') {
            h += c;
        }
    }
    sort(h.begin(),h.end());
    for(int i=0;i<h.size();++i){
        cout<<h[i];
        if (i != h.size() - 1) {
            cout << '+';
        }
    }
    
   
    return 0;
}