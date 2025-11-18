
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
   string s;
  
  cin >> s;
  int r = (int)s[1] - (int)'0';
  
  for(int i = 1;i <= 8;i++){
    if(i == r)continue;
    
    cout << s[0]<< i<<endl;
  }
  
  for(char a = 'a';a <= 'h';a++){
    if(a == s[0])continue;
    cout << a << s[1]<<endl;
  }
    return 0;
}