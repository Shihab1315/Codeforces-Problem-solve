
#include <bits/stdc++.h>

using namespace std;

int main()
{

   int t;
   cin>>t;
   map<string,int>cmp;
   while(t--){
    string s;
    cin>>s;
    cmp[s]++;
    if(cmp[s]>1){
        cout<<"Yes"<<endl;

    }else{
        cout<<"No"<<endl;
    }
   }

    return 0;
}