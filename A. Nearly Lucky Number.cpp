
#include <bits/stdc++.h>

using namespace std;

int main()
{

   string s;
   cin>>s;
   long long n=s.size(),c4=0;
 
for(int i=0;i<n;i++){
    if(s[i]=='4'||s[i]=='7'){
       c4++;
    }
    
}
if(c4==4|| c4==7){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}


    return 0;
}