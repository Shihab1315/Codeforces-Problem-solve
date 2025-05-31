
#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int n;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
int ap=0,count=0;
for(int i=0;i<n;i++){
    if(a[i]<0){
        if(ap==0){
           count++; 
        }else{
            ap+=a[i];
        }

    }else{
        ap+=a[i];
    }
}
cout<<count<<endl;
    return 0;
}