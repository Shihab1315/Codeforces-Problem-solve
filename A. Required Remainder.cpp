
#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
   long long t;
   cin>>t;
   while(t--){
     long long x,y,n;
     cin>>x>>y>>n;
     for(int i=n;;i++){
        if((n-y)%x==0){
            cout<<n<<endl;
            break;
        }
     }
    }
   
    return 0;
}