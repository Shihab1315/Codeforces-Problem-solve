
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
        bool ft=true;
        sort(v1.begin(),v1.end());
        for(int i=0;i<n;i++){
            int x=abs(v[i]-v1[i]);
            if(x>1){
               ft=false;
               break;
            }
        }
        if(ft){
            yes;
        }else{
            no;
        }
      }
      
    return 0;
}