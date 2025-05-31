
#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
       int t;
       cin>>t;
       while(t--){
         int  a,s;
         cin>>a;
        int x=sqrt(a);
        double r=sqrt(a);
        if(x!=r){
            cout<<-1<<endl;
        }
        else if(x==r && x%2==0){
            s=x/2;  
          cout<<s<<" "<<s<<endl;
        }else if(x==r && x%2!=0){
           s=x/2;
           cout<<s<<" "<<s+1<<endl;
        }
       }
    return 0;
}