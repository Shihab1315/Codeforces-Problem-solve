
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
  if(cmp[s]==1){
    cout<<"OK"<<endl;
  }else{
    cout<<s<<cmp[s]-1<<endl;
  }
  }

    return 0;
}