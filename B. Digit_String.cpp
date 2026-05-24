
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
     int t;
     cin>>t;
     while (t--)
     {
        string s;
        cin >> s;

        int two = 0;
        int oneThree = 0;

        for(char c : s)
        {
            if(c == '4')
                continue;

            if(c == '2')
            {
                if(oneThree == 0)
                    two++;
            }
            else
            {
                oneThree++;
            }
        }

        int longest = two + oneThree;

        cout << s.size() - longest << '\n';
     }
     
    return 0;
}