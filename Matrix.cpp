
#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int arr[n][n];
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
   }
   int dsum=0;
  
   for(int i=0;i<n;i++){
      dsum+=arr[i][i];
        
     }
   int ssum=0;
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i+j==n-1){
            ssum+=arr[i][j];
        }
    }
   }
cout<<abs(dsum-ssum)<<endl;


    return 0;
}