
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
     vector<int>v;
     for(int i=1;i<=10000;i++){
           int last=i%10;
           if(i%3!=0 && last!=3){
            v.push_back(i);
           }
     }
     while(t--){
        int k;
        cin>>k;
         cout<<v[k-1]<<"\n";
     }
    return 0;
}