
#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int earn=0;
    for(int i=0;i<m;i++){
        if(v[i]<0){
        earn-=v[i];
        }
    }A. Required Remainder

    cout<<earn<<endl;
    return 0;
}