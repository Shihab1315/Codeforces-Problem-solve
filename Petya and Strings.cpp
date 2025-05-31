
#include <bits/stdc++.h>

using namespace std;

int main()
{

    string t1,t2;
    cin>>t1>>t2;
    for(int i=0;i<t1.size();i++){
        t1[i]=tolower(t1[i]);
    }
    for(int i=0;i<t2.size();i++){
        t2[i]=tolower(t2[i]);
    }
  if(t1<t2){
    cout<<"-1"<<endl;
  }else if(t1>t2){
    cout<<"1"<<endl;
  }else{
    cout<<"0"<<endl;
  }
    return 0;
}