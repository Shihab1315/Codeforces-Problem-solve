
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
     int x;
     string st;
     cin>>x>>st;
     int s=1;
     for(int i=1;i<x;i++){
        if(st[i]!=st[i-1]){
            s++;
        }
     }
     if (s == 2)
    cout << 2 << '\n';
else
    cout << 1 << '\n';
   }
   
    return 0;
}