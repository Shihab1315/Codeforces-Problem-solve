
#include <bits/stdc++.h>

using namespace std;

int main()
{

   set<int,int>a;
   a.insert(1,9);
    a.insert(1,6);
     a.insert(1,10);
      a.insert(12);
       a.insert(100);
       cout<<*prev(a.find(10))<<endl;
    cout<<*a.upper_bound(12)<<endl;
    return 0;
}