
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, countD = 0, countA = 0;
    cin >> n;
    while (n--)
    {
        char ch;
        cin >> ch;
        if (ch == 'D')
        {
            countD++;
        }
        else
        {
            countA++;
        }
    }
    if (countD == countA)
    {
        cout << "Friendship" << "\n";
    }
    else if (countD < countA)
    {
        cout << "Anton" << "\n";
    }
    else
    {
        cout << "Danik" << "\n";
    }
    return 0;
}