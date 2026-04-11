
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
    vector<int>v(n+1);
    for(int i=1;i<n;i++){
          cin>>v[i];
    }
    int agemart=0,pisemark=0,equal=0;
    for(int i=1;i<n+1;i++){
          if(v[i]>i){
             agemart++;
          }else if(v[i]<i){
            pisemark++;
          }else{
            equal++;
          }
    }
    int mn=min(agemart,pisemark);
    cout<<mn+equal<<'\n';


   }
   
    return 0;
}