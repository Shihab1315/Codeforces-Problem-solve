
#include <bits/stdc++.h>

using namespace std;

int main()
{

   int n,count=0;
   cin>>n;
   while(n--){
    int m,c;
    cin>>m>>c;
    if(c-m>1){
       count++;
    }
   }
   cout<<count<<"\n";

    return 0;
}