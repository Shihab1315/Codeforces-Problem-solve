
#include <bits/stdc++.h>

using namespace std;
bool compare(const pair<int,int>p1,const pair<int,int>p2){
    if(p1.first>p2.first)return 1;
    else if(p1.first==p2.first)return (p1.second<p2.second);
return 0;
}
int main()
{

    int N,K;
    cin>>N>>K;
    vector<pair<int,int>>v(N);
    for(int i=0;i<N;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end(),compare);
    int result=0;
    for(auto u:v){
        if(u==v[K-1]){
            result++;
        }
    }
    cout<<result<<endl;

    return 0;
}