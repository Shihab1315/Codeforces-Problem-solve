
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
     ll t;
     cin>>t;
     while (t--)
     {
        int n;
        cin>>n;
        vector<int>v;
        
        for(int i=n;i>=0;i--){
             v.push_back(i);
        }
        if(n%2==0){
            for(int i=0;i<n;i++){
                cout<<v[i]<<" ";
            }
            cout<<'\n';
        }else{
           int x=n/2;
            for(int i=0;i<n;i++){
                if(i==x){
                     cout<<v[i+1]<<" ";
                }else if(i==x+1){
                     cout<<v[i-1]<<" ";
                }else{
                    cout<<v[i]<<" ";
                }
                
            }
        }
     }
     
    return 0;
}