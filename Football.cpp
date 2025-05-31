
#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

    int t;
    cin>>t;
    vector<string>ans;
    while(t--){
      string s;
      cin>>s;
      ans.push_back(s);
    }
    if(ans.size()==1){
        cout<<ans[0]<<endl;
        return 0;
    }
    string pos=ans[0];
    string d;
    int count=1;
    for(int i=1;i<ans.size();i++){
         if(pos==ans[i]){
            count++;
         }else{
            d=ans[i];
         }
    }
    int sun=ans.size()-count;
    if(sun>count){
        cout<<d<<endl;
    }else{
        cout<<pos<<endl;
    }



    return 0;
}