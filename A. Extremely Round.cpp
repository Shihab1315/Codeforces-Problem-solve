
#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
      int t;
      cin>>t;
      while(t--){
        long long n;
        cin>>n;
        int count=0;
        for(int i=1;i<=9;i++){
            int x=i;
          while(x<=n){
               count++;
               x*=10;
           }
        }
        cout<<count<<endl;
      }
    return 0;
}