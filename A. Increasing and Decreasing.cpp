
#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);



int t;
cin>>t;
while(t--){
    int n,y,x;
    cin>>x>>y>>n;
    int arr[n];
    arr[n-1]=y;
    int b=1;
    for(int i=n-2;i>=0;i--){
        arr[i]=arr[i+1]-b;
        b++;
    }
    if(arr[0]>=x){
      arr[0]=x;
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
      }
      cout<<'\n';
    }else{
    cout<<-1<<'\n';
    }

}
    return 0;
}
    