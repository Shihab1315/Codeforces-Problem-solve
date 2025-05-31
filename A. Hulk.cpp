
#include <bits/stdc++.h>

using namespace std;

int main()
{
int n;
cin>>n;
vector<string>v;
if(n==1){
    v.push_back("I hate it");
}
if(n>1){
for(int i=1;i<=n-1;i++){
    if(i%2==0){
        v.push_back(" I love that");
    }else{
        v.push_back("I hate that");
    }
}
}
if(n%2!=0 && n!=1){
  v.push_back("I hate it");
}else if(n%2==0 && n!=1){
    v.push_back("I love it");
}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
    return 0;
}