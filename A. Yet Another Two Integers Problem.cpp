
#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        long long sub=0;
        if(a>b){
            sub=a-b;
        }else{
            sub=b-a;
        }
        if(sub%10!=0){
            cout<<(sub/10)+1<<'\n';
        }else{
            cout<<(sub/10)<<'\n';
        }

    }
    return 0;
}