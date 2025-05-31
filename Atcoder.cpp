
#include <bits/stdc++.h>

using namespace std;

int main()
{
int n,m;
cin>>n>>m;
int arr[n];
int arr1[m];
for(int i=0;i<n;i++){
  cin>>arr[i];
}
for(int i=0;i<m;i++){
  cin>>arr1[i];
}

int total=0;
for(int i=0;i<m;i++){
  total+=arr[arr1[i]-1];
}
cout<<total<<"\n";

    return 0;
}