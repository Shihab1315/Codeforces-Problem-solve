#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int block = -1;  
        int ans = 0;

        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                block = i + k; 
            } else {
                if(i > block) ans++; 
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
