
#include <bits/stdc++.h>

using namespace std;
int arr[101];
int main()
{

    int n,i=0;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        i++;
        arr[a]=i;
    }
    for(auto u:arr){
        if(u!=0){
        cout<<u<<" ";
        }
    }
    return 0;
}