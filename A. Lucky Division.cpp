
#include <bits/stdc++.h>

using namespace std;

int main()
{

   int t,count=0,s=0,d;
   cin>>t;
    d=t;
    while(t!=0){
        int last=t%10;
    if(last==4 || last==7){
         count++;
         s++;
    }else{
        s++;
    }
    t/=10;
   }
   if(s==count){
    cout<<"YES"<<endl;
   }else{
    if(d%4==0 || d%7==0 ||d%44==0 || d%47==0 || d%77==0 || d%444==0 || d%447==0 || d%477==0 || d%744==0 || d%747==0|| d%774==0 || d%777==0){
       cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
   }

    return 0;
}