#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long t;
    cin >> n >> t;

    long long a[100000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int left = 0, maxBooks = 0;
    long long sum = 0;

    for (int right = 0; right < n; right++) {
        sum += a[right];

        while (sum > t) {
            sum -= a[left];
            left++;
        }

        int currentBooks = right - left + 1;
        if (currentBooks > maxBooks) {
            maxBooks = currentBooks;
        }
    }

    cout << maxBooks << endl;

    return 0;
}
