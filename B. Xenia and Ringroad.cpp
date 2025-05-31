
#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
long long n,m;
cin>>n>>m;
vector<int>arr(m);
for(int i=0;i<m;i++){
    cin>>arr[i];
}
long long count=arr[0]-1;
for(int i=0;i<m-1;i++){
    if(arr[i]>arr[i+1]){
        count+=(n-arr[i]);
        count+=arr[i+1];
    }else{
        count+=(arr[i+1]-arr[i]);
    }
}
cout<<count<<endl;
    return 0;
}