
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
        ll sum=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        bool ft=false;
        if(sum%3==0){
            cout<<0<<'\n';
        }else if((sum+1)%3==0){
            cout<<1<<'\n';
        }else{
              for(int i=0;i<n;i++){
                int x=sum-v[i];
                if(x%3==0){
                    ft=true;
                    cout<<1<<'\n';
                    break;
                }
              }
              if(ft==false){
                cout<<2<<'\n';
              }
        }
     }
     
    return 0;
}