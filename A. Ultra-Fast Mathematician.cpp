
#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s,h,k;
    cin>>s>>h;
    for(int i=0;i<s.size();i++){
        if(s[i]==h[i]){
          k+='0';
        }else{
            k+='1';
        }
    }
    cout<<k<<endl;

    return 0;
}