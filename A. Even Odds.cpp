
#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long int  n,k,count;
    cin>>n>>k;
    count=(n+1)/2;
   if(k<=count){
    cout<<2*k-1<<endl;
   }else{
      cout<<2*k-2*count<<endl;
   }

    return 0;
}