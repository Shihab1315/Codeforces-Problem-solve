
#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
   int t;
   cin>>t;
   vector<int>arr(t);
   for(int i=0;i<t;i++){
    cin>>arr[i];
   }
   sort(arr.begin(),arr.end());
   long long n;
   cin>>n;
   while(n--){
    long long d;
    cin>>d;
    int left=0,right=t;
    while(left<right){
        int mid=left+(right-left)/2;
        if(arr[mid]<=d){
            left=mid+1;
        }else{
            right=mid;
        }
    }
    cout<<left<<'\n';
   }
    return 0;
}