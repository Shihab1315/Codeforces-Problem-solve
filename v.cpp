
#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
vector<int>arr;

    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(8);
    int mn=INT_MAX;
    for(int i=0;i<6;i++){
        int count=0;
        for(int j=5;j>=0;j--){
            if((arr[i]+arr[j])%2==0){
                count++;
                break;
            }else{
                count++;
            }
        }
        mn=min(mn,count);
    }
    cout<<mn<<endl;

    return 0;
}