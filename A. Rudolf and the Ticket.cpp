
#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
       int t;
       cin>>t;
       while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int left[n+1],right[m+1];
        for(int i=0;i<n;i++){
            cin>>left[i];
        }
        for(int i=0;i<m;i++){
            cin>>right[i];
        }
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(left[i]+right[j]<=k){
                    count++;
                }
            }
        }
        cout<<count<<'\n';
       }
    return 0;
}