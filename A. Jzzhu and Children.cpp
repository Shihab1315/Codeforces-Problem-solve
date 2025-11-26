
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    queue<int> q;
    queue<int> q_idx;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        q.push(v[i]);
        q_idx.push(i + 1);
    }

    while(q.size() > 1) {
        int cur = q.front();
        int idx = q_idx.front();
        q.pop();
        q_idx.pop();

        if(cur > m) {
            q.push(cur - m);     
            q_idx.push(idx);     
        }
    }

    cout << q_idx.front() << '\n';  
    return 0;
}