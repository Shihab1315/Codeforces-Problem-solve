
#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int vi=5-k,count=0;
    for(int i=0;i<n;i++){
        if(v[i]<=vi){
           count++;
        }
    }
    cout<<(count/3)<<endl;
    
    return 0;
}