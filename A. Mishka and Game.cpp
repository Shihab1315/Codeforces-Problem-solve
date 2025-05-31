
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int cM = 0, cC = 0, d = 0;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
        {
            cM++;
        }
        else if (a < b)
        {
            cC++;
        }
        else
        {
            d++;
        }
    }
    
    if (cM > cC && cM > d)
    {
        cout << "Mishka" << endl;
    }
    else if (cC > cM && cC > d)
    {
        cout << "Chris" << endl;
    }
    else if (cM == 1 && cC == 0)
    {
        cout << "Mishka" << endl;
    }
    else if (cM == 0 && cC == 1)
    {
        cout << "Chris" << endl;
    }
    else
    {
        cout << "Friendship is magic!^^" << endl;
    }

    return 0;
}