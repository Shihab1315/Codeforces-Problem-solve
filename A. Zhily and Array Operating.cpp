
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

        vector<int>v1;
        int j=0;
        v1.push_back(v[n-1]);
        for(int i=n-2;i>=0;i--){
             if(v[i]+v1[j]>0){
                v1.push_back(v[i]+v1[j]);
             }else{
                v1.push_back(v[i]);
             }
             j++;
        }
        int count=0;
        if(v1[0]>0)count++;
        for(int i=1;i<n;i++){
            if(v1[i]>0){
              count++;
            }
        }
        cout<<count<<'\n';
    
     }
     
    return 0;
}