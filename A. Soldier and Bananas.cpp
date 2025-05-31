
#include <bits/stdc++.h>

using namespace std;

int main()
{

   long long k,n,w,i=1,total=0;
   cin>>k>>n>>w;
   while(w--){
      total+=(i*k);
      i++;
   }
  if(n>=total){
    cout<<0<<endl;
  }else{
   cout<<(total-n)<<"\n";
  }

    return 0;
}