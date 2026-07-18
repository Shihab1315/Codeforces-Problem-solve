
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
   ll n,x;
   cin>>n>>x;
    vector<long long>a(n);

        for(int i=0;i<n;i++)
            cin>>a[i];

        long long L=a[0]-x;
        long long R=a[0]+x;

        int ans=0;

        for(int i=1;i<n;i++)
        {
            long long left=a[i]-x;
            long long right=a[i]+x;

            if(right<L || left>R)
            {
                ans++;
                L=left;
                R=right;
            }
            else
            {
                L=max(L,left);
                R=min(R,right);
            }
        }

        cout<<ans<<"\n";
    }


    return 0;
}