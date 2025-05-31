
#include <bits/stdc++.h>

using namespace std;

int main()
{

   int n,sum=0;
   cin>>n;
   vector<int> ans; 

    for (int i = 0; i < n; i++) {
        int s;
        cin >> s;
        sum+=s;
        ans.push_back(s);
    }

   
  
   int d=0,count=0,w;
   sort(ans.begin(),ans.end());
   
   for(int i=n-1;i>=0;i--){
    d+=ans[i];
   w=sum-d;
    if(w>=d){
       count++;
    }else{
        count++;
        break;
    }
   }
   cout<<count<<endl;

    return 0;
}