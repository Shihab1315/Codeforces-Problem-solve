
#include <bits/stdc++.h>

using namespace std;

int main()
{

   int n,m,count=1,c1=1;
   cin>>n>>m;
   vector<vector<char> >ans(n,vector<char>(m));
   for(int i=0;i<n;i++){
    if(count%2!=0){
      for(int j=0;j<m;j++){
        ans[i][j]='#';

      }
      count++; 
    }else{
        for(int j=0;j<m;j++){
            if(c1%2!=0){
                if(j!=m-1){
               ans[i][j]='.';
                }else{
                    ans[i][j]='#';
                }
            }else{
                if(j==0){
               ans[i][j]='#';
                }else{
                    ans[i][j]='.';
                }
            }    
    }
    c1++;
    count++;
   }
}
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<ans[i][j];
    }
    cout<<"\n";
   }

    return 0;
}