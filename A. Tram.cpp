
#include <bits/stdc++.h>

using namespace std;

int main()
{

   int n,count=0,mx=0;
   cin>>n;
   while(n--){
    int a,b;
    cin>>a>>b;
     count-=a;
     count+=b;
     mx=max(mx,count);
   }
   cout<<mx<<endl;


    return 0;
}