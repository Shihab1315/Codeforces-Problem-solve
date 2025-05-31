
#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
          int k,r,count=0;
          cin>>k>>r;
          for(int i=1; ;i++){
            int sum=i*k;
            count++;
            int last=sum%10;
            if(last==0 || last==r){
                 break;
            }
          }
          cout<<count<<'\n';
    return 0;
}