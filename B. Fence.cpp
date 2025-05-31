
#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    long long sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += v[i];
    }
    int mn = sum, d = 0;
    int l = 0, r = k - 1;
    while (r < n - 1)
    {
        sum = sum - v[l];
        l++;
        r++;
        sum += v[r];
        if (mn > sum)
        {
            mn = sum;
            d = l;
        }
    }
    cout << d + 1 << endl;
    return 0;
}