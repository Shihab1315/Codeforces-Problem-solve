
#include <bits/stdc++.h>

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
        if(n%7==0){
            cout<<n<<endl;
        }else{
            int s=n/10;
            int z=s*10+1;
            for(int i=0;i<9;i++){
                if(z%7==0){
                    cout<<z<<endl;
                    break;
                }else{
                    z+=1;
                }
            }
        }
       }
    return 0;
}