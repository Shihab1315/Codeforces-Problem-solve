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
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int index=0;
        int mx=-1;
        for(int i=0;i<n;i++){
            if(v[i]>mx){
                mx=v[i];
                index=i;
            }
        }
        swap(v[0],v[index]);
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<'\n';
    }
    
    return 0;
}