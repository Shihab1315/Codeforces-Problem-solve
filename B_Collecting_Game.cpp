
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
        vector<int>v1=v;
        vector<int>ans;
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            int count=0,sum=v[i];
            for(int j=0;j<n;j++){
                  if(sum>=v1[j]){
                    count++;
                    sum+=v1[j];
                  }else{
                      ans.push_back(count);
                  }
            }
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<' ';
        }
        cout<<'\n';
     }
     
    return 0;
}