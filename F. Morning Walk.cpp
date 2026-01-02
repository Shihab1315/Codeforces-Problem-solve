
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
   int K;
    cin >> K;

    while (K--) {
        long long L, v0, T;
        int N;
        cin >> L >> v0 >> T >> N;

        vector<long long> result(N);

        for (int i = 0; i < N; i++) {
            long long ti, vi;
            cin >> ti >> vi;

            if (ti > T) {
                result[i] = 0;
                continue;
            }

            long long vrel = llabs(v0 - vi);
            long long remaining = T - ti;

            long long extra = (remaining * vrel) / L;
            result[i] = 1 + extra;
        }

        for (int i = 0; i < N; i++) {
            cout << result[i] << (i + 1 < N ? ' ' : '\n');
        }
    }
    return 0;
}