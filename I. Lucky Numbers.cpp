
#include <bits/stdc++.h>

using namespace std;

int main()
{

  int s;
   cin>>s;

//    int a=s%10;
//       s=s/10;
//      int b=s%10;
//      if(a%b==0 || b%a==0){
//              cout<<"YES"<<"\n";
//      }else{
//             cout<<"NO"<<"\n";
//      }
   if((s[0]-'0')%(s[1]-'0')==0 || ((s[1]-'0')%(s[0]-'0'))==0){
    cout<<"YES"<<"\n";
   }else{
    cout<<"NO"<<"\n";
   }
    return 0;
}