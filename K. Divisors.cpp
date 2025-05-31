
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;
    vector<int>arr;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            arr.push_back(i);
        }
    }
    arr.push_back(n);
    for(auto u:arr){
        cout<<u<<"\n";
    }

    return 0;
}