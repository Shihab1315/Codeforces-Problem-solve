
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

    int mx=0,count=1;
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++){
           if(v[i]==v[i+1]){
            count++;
           }else{
               mx=max(mx,count);
               count=1;
           }   
    }
      mx=max(mx,count);
    set<int>st(v.begin(),v.end());
    int x=st.size()-1;
    if(mx!=1){
      x++;
      mx--;
    }
    if(n==1){
        cout<<0<<'\n';
    }else{
        cout<<min(x,mx)<<'\n';
    }
       
    }
    
    return 0;
}