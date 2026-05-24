
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
     int n;
     cin>>n;
     vector<int>v(n);
     for(int i=0;i<n;i++){
        cin>>v[i];
     }
     sort(v.begin(),v.end());
      
     int i=0;
     int k;
     cin>>k;
     while(k--){
       int i,j;
       cin>>i>>j;
           
     int x= lower_bound(v.begin(), v.end(), i) - v.begin() + 1;
     int y=upper_bound(v.begin(), v.end(), j) - v.begin();
     cout<<y-x+1<<endl;

     }
    return 0;
}