
#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
      int t;
      cin>>t;
      while(t--){
        int x,k;
        cin>>x>>k;
        for(int y=x; ;y++){
            int sum=0,z=y;
            while(z>0){
                sum+=z%10;
                z/=10;
            }
            if(sum%k==0){
                cout<<y<<'\n';
                break;
            }
        }
      }
    return 0;
}