
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
     int y;
    cin >> y;
    while (y--) {
        int number2;
        cin >> number2;
        vector<int>ans;
        for (int i = 1; i <= number2; i++) {
            ans.push_back(i);
            ans.push_back(number2+2*i-1);
            ans.push_back(number2+2*i);
        }
        for(int i=0;i<ans.size();i++){
          cout<<ans[i]<<" ";
        }
        cout << "\n";
    }
         
    
    
    return 0;
}