
#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
    int n,m,a,b,total=0,z=0;
    cin>>n>>m>>a>>b;
    if(n==1 && a==1){
        cout<<1<<endl;
        return 0;
    }
    if(b<=a*m){
        if(m>n){
            cout<<b<<endl;
            return 0;
        }else{
            int s=n/m;
            total+=(s*b);
            z=n-(s*m);
        }
    }else{
        total+=(n*a);
    }
    if(z*b<=a){
    total+=(z*b);
    }else{
        total+=(z*a);
    }
    cout<<total<<endl;
    return 0;
}