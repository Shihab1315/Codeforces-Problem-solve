
#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int a;
    cin>>a;
    vector<int>arr(a);
    int count=0;
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int d=0,f=1;
    while(d<arr.size()){
        if(arr[d]!=f){
            count++;
            f++;
            d++;
        }else{
         f++;
        }
    }
    cout<<f-1<<endl;
}

    return 0;
}