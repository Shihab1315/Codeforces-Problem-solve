
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;
    multiset<int>ans;
    while(n--){
    int a;
     cin>>a;
     ans.insert(a);
    }
    for(auto u:ans){
        cout<<u<<" ";
    }

    return 0;
}