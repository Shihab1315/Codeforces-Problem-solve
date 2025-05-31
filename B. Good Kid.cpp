
#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
       int t;
       cin>>t;
       while(t--){
          int n;
          cin>>n;
          int arr[n];
          for(int i=0;i<n;i++){
            cin>>arr[i];
          }
          int mn=arr[0],index=0;
          for(int i=0;i<n;i++){
              if(mn>arr[i]){
                  mn=arr[i];
                  index=i;
              }
          }
          arr[index]++;
          long long add=1;
          for(int i=0;i<n;i++){
            add*=arr[i];
          }
          cout<<add<<'\n';
       }
    return 0;
}