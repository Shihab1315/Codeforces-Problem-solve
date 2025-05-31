
#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
      vector<int>q;
     for(int i=0;i<4;i++){
        int a;
        cin>>a;
        q.push_back(a);
     }
     sort(q.begin(),q.end());
     
     
      int a = q[3] - q[2];
    int b = q[3] - q[1]; 
    int c = q[3] - q[0]; 

    cout << a << " " << b << " " << c << endl;
     
    return 0;
}