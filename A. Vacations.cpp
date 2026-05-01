
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
      int n;
    cin >> n;

    vector<int> v1(n);
    for(int i = 0; i < n; i++){
         cin >> v1[i];
    }

    int last = 0; // 0 = rest, 1 = contest, 2 = gym
    int rest = 0;

    for(int i = 0; i < n; i++) {
        if(v1[i] == 0) {
            rest++;
            last = 0;
        }
        else if(v1[i] == 1) {
            if(last != 1) last = 1;
            else {
                rest++;
                last = 0;
            }
        }
        else if(v1[i] == 2) {
            if(last != 2) last = 2;
            else {
                rest++;
                last = 0;
            }
        }
        else { 
            if(last == 1) last = 2;
            else last = 1;
        }
    }

    cout << rest << endl;
    return 0;
}