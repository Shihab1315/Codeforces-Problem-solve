
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
   int k;
   cin>>k;
   vector<int>v(12);
   for(int i=0;i<12;i++){
    cin>>v[i];
   }
   sort(v.rbegin(),v.rend());
   int c=0,sum=0;
   if(k==0){
    cout<<0<<endl;
    return 0;
   }
   for(int i=0;i<12;i++){
       sum+=v[i];
       c++;
       if(sum>=k){
          break;
       }
   }
   if(sum<k){
    cout<<-1<<'\n';
   }else{
    cout<<c<<endl;
   }
    return 0;
}