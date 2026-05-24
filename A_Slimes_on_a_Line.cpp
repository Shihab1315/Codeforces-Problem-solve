
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
       vector<int>v(n);
       for(int i=0;i<n;i++){
        cin>>v[i];
       }
       sort(v.begin(),v.end());
       int x=v[n-1]-v[0];
       if(x%2!=0){
        cout<<x/2+1<<'\n';
       }else{
          cout<<x/2<<'\n';
       }
     }
     
    return 0;
}