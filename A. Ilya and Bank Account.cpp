
#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
    long long n;
    cin>>n;
    if(n>=0){
      cout<<n<<endl;
    }else if(n<0 && n>-9){
        cout<<0<<endl;
    }
    else{
        int x=1;
        while(x--){
            int l=n%10;
            n/=10;
            int z=n%10;
            if(l<z){
                cout<<n<<endl;
            }else{
                n/=10;
                cout<<(n*10+l)<<endl;
            }
        }
    }
    return 0;
}