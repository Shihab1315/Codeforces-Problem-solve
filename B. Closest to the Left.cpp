
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
     int n,k;
     cin>>n>>k;
     vector<int>v(n),v1(k);
     for(int i=0;i<n;i++){
        cin>>v[i];
     }
      for(int i=0;i<k;i++){
        cin>>v1[i];
     }
     int i=0;
     while(i<k){
            int st=0,end=n-1,ans=-1;
             int index=0;
            while(st<=end){
              int mid=st+(end-st)/2;
              
            if(v[mid] <= v1[i]){
              ans=mid;
                   st=mid+1;
               }else{
                   end=mid-1;
               }
            }
             cout << ans + 1 << '\n';
            i++;

     }
    return 0;
}