
#include <bits/stdc++.h>

using namespace std;

int main()
{
int w;
cin>>w;
int size=w*7;
vector<int>v(size);
vector<int>ans;
for(int i=0;i<size;i++){
    cin>>v[i];
}
int count=0;
int sum=0;

for(int i=0;i<size;i++){
    count++;
    sum+=v[i];
    if(count==7){
        ans.push_back(sum);
        sum=0;
        count=0;
    }
}
for(auto u:ans){
    cout<<u<<" ";
}
    return 0;
}