
#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
    int a,b,c,d;
    cin>>a>>b;
    if(a<b){
      c=a;
    }else{
        c=b;
    }
    d=abs(b-a);
    cout<<c<<" "<<d/2<<"\n";
    return 0;
}