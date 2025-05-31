
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int A, B, C;
    cin >> A >> B >> C;
    int max;
    int min;
    if (A >= B && A >= C)
    {
        max = A;
    }
    else if (B >= C && B >= A)
    {
        max = B;
    }
    else
    {
        max = C;
    }
    if (A <= B && A <= C)
    {
        min = A;
    }
    else if (B <= C && B <= A)
    {
        min = B;
    }
    else
    {
        min = C;
    }

    cout << min << " " << max << endl;
    return 0;
}
