
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
       
        if(sum<=0 || sum<n){
            cout<<1<<'\n';
        }else{
            if(sum==n){
                cout<<0<<'\n';
            }else{
                cout<<sum-n<<'\n';
            }
        }

      }
      
    return 0;
}