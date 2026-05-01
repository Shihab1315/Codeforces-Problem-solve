
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
   ll y;
    cin >> y;

    while (y--) {
        int n,m;
        cin >> n>>m;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int count=1;
        int x=a[0];
        int mx=INT_MIN;
        for(int i=1;i<n;i++){
           if(x==a[i]){
             count++;
           }else{
              x=a[i];
              mx=max(mx,count);
              count=1;
           }
        }
         mx=max(mx,count);
      if(mx>=m){
        cout<<"NO"<<endl;
      }else{
        cout<<"YES"<<endl;
      }
    }
    return 0;
}