
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
        int a,b,c;
        cin>>a>>b>>c;
        int x=a+b;
        int y=a+c;
        int z=b+c;
        if(x==c || y==b || z==a){
            yes;
        }else{
            no;
        }
    }
    
    return 0;
}