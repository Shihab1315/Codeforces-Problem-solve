
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
    int s;
    cin>>s;
    while (s--)
    {
        int a;
        cin>>a;
        int x=2*a;
        for(int i=x-1;i>=x/2;i--){
            cout<<i<<' ';
        }
        cout<<endl;
    }
    
    return 0;
}