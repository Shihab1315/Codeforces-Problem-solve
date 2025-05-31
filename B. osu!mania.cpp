
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
    char arr[n][4];
    vector<int>ans;
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
            if(arr[i][j]=='#'){
                ans.push_back(j+1);
            }
        }
    }
    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }
    cout<<'\n';
   }
    return 0;
}