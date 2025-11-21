
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
       int n;
       cin>>n;
       if(n%2!=0){
        cout<<0<<'\n';
       }else{
        cout<<n/4+1<<'\n';
       }
    }
    
    return 0;
}
