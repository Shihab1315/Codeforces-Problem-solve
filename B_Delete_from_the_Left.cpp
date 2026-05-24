#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        string a, b;
        cin >> a >> b;

        int mx = 0;

      int i=a.size()-1;
      int j=b.size()-1;
      int count=0;
    while(i>=0 && j>=0){
        if(a[i]==b[j]){
          count++;
          i--,j--;
        }else{
          break;
        }
    }
    
  //cout<<i<<j<<endl;  
 
    int x=a.size()-count;
    x+=b.size()-count;
    cout<<x<<'\n';
    
}