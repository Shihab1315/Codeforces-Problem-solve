
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
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int ans=0;
        ll sum1=v[0],sum2=v[n-1];
        int i=0,j=n-1;
        while(i<j){
              if(sum1==sum2){
                ans+=i+1;
                ans+=n-j;
                sum1+=v[i+1];
                sum2+=v[j-1];
                i++,j--;
              }else if(sum1>sum2){
                sum2+=v[j-1];
                j--;
              }else{
                  sum1+=v[i+1];
                  i++;
              }
        }
        cout<<ans<<'\n';
    }
    
    return 0;
}