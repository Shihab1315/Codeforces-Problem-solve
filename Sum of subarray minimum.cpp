
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
   ll n;
   cin>>n;
   vector<int>arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
        vector<int>v;
        v.push_back(arr[0]);
        long long sum=0;
        for(int i=1;i<arr.size();i++){
            sum=arr[i]+v[i-1];
             v.push_back(sum);
        }
        bool ft=false;
        int index;
      for(int i=1;i<v.size()-1;i++){
        if(v[i-1]==v[v.size()-1]-v[i]){
           ft=true;
           index=i;
           break;
        }
      }
        if(ft==true){
            cout<<index<<'\n';
        }else{
            cout<<-1<<'\n';
        }
   
    return 0;
}