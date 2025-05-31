
#include <bits/stdc++.h>

using namespace std;

int main()
{

    set<int>s;
    int n;
    cin>>n;
    int m=0,digits=0;
    for(int i=1;i<10;i++){
         m=n+1;
    while(n!=0){
        int last=n%10;
        s.insert(last);
        digits++;
        n/=10;

    }
    if(digits==s.size()){
        cout<<m<<endl;
    }
    }
    return 0;
}