
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
       set<int>st(v.begin(),v.end());
       int x=n-st.size();
       if(x%2!=0){
            cout<<st.size()-1<<'\n';
       }else{
            cout<<st.size()<<'\n';
       }
    }
    
    return 0;
}