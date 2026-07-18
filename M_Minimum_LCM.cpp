
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
   int t;
   cin>>t;
   while (t--)
   {
      int n;
      cin>>n;
      if(n%2==0){
        cout<<n/2<<" "<<n/2<<'\n';
      }else{
         vector<int> divs;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divs.push_back(i);

            if (i != n / i)
                divs.push_back(n / i);
        }
    }
    sort(divs.begin(),divs.end());
    // for(int i=0;i<divs.size();i++){
    //     cout<<divs[i]<<" ";
    // }
    // cout<<endl;


      cout<<divs[divs.size()-2]<<" "<<n-divs[divs.size()-2]<<'\n';
      }
   }
   
    return 0;
}