
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
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
    vector<int>v;
    v.push_back(n-1);
    v.push_back(n);
    for(int i=n-2;i>=1;i--){
        v.push_back(i);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<' ';
    }
    cout<<'\n';
}
    return 0;
}