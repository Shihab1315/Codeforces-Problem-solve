
#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
  int n;
  cin>>n;
  long long int arr[n];

  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=0;i<n;i++){
    long long int  count=2;
    for(int j=2;j<=(arr[i])/2;j++){
        if(arr[i]%j==0){
            count++;
            }
        }
    if(count==3){
        cout<<"YES"<<endl;
        
    }else{
        cout<<"NO"<<endl;
    }
  }
    return 0;
}