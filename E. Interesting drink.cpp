
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ans[i];
    }
    sort(ans.begin(), ans.end());
    int q;
    cin >> q;
    while (q--)
    {
        long long m1;
        cin >> m1;
       int st=0,end=n;
    //    if(ans[n-1]<m1){
    //     cout<<ans.size()<<endl;
    //    }else if(ans[0]>m1){
    //       cout<<0<<endl;
    //    }else{
       while(st<end){
           int mid=st+(end-st)/2;
           if(ans[mid]<=m1){
            st=mid+1;
           }else{
              end=mid;
           }
       }
       
          cout<<st<<endl;
       
       
    
}
    return 0;
}
