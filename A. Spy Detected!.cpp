
#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
     int t;
     cin>>t;
     while(t--){
        int n,s=0;
        cin>>n;
        int arr[n];
       vector<int>vis(101,0);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            vis[arr[i]-1]++;
        }
        for(int i=0;i<101;i++){
            if(vis[i]==1){
                s=i+1;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]==s){
                cout<<i+1<<endl;
            }
        }
     }
    return 0;
}