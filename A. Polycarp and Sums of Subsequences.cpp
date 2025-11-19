
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
        int n;
        cin>>n;
        while (n--)
        {
              vector<int>v(7);
              for(int i=0;i<7;i++){
                cin>>v[i];
              }
              ll max=v[6];
              int sum=v[0]+v[1];
              for(int i=2;i<6;i++){
                  if(sum+v[i]==max){
                    max=v[i];
                    break;
                  }
              }
              cout<<v[0]<<" "<<v[1]<<" "<<max<<'\n';
        }
        
      
    return 0;
}