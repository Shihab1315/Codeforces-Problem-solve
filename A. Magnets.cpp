
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;
    
    vector<int>v(n);
  for(int i=0;i<n;i++){
    int s;
    cin>>s;
    v.push_back(s);
  }
  if(v.size()==1){
        cout<<1<<endl;
    }
  
  int i=0,j=1,count=0;
  
  while(j<v.size()){
    if(v[i]==v[j]){
        i++,j++;
    }else{
      count++;
      i++,j++;
    }
  }
  cout<<count<<endl;
    return 0;
}