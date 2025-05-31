
#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
   int t;
   cin>>t;
   while(t--){
    string s;
    cin>>s;
    int suml=0,sumr=0;
    for(int i=0;i<s.size();i++){
        if(i<=2){
            suml+=s[i];
        }else{
            sumr+=s[i];
        }
    }
    if(suml==sumr){
       cout<<"YES"<<'\n';
    }else{
        cout<<"NO"<<'\n';
    }
   }
    return 0;
}