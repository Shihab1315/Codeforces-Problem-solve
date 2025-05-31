
#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int n,k,ans=0;
    cin>>n>>k;
    string s;
    cin>>s;
    for(int i=0;i<s.size();){
         if(s[i]=='B'){
            ans++;
            i+=k;
         }else{
            i++;
         }
    }
    cout<<ans<<'\n';

}
    return 0;
}