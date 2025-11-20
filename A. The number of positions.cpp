
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int n,a,b;
  cin >> n >> a >>b;
  int ans = 1;
  n--;
  n-=a;
  int x = min(n,b);
  cout << ans+x << endl;
   
    return 0;
}