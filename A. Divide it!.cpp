
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
        ll n;
        cin>>n;
        int count=0;
        while (n!=1)
        {
           if(n%2==0){
              count++;
              n/=2;
           }else if(n%3==0){
              count++;
              n*=2;
              n/=3;
           }else if(n%5==0){
            count++;
           n*=4;
           n/=5;
           }else{
              break;
           }
        }
        if(n==1){
            cout<<count<<'\n';
        }else{
            cout<<-1<<'\n';
        }
    }
    
    return 0;
}