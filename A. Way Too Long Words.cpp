
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
    string st;
    cin>>st;
    int s=st.size();
    if(s>10){
      char z=st.front();
      char r=st.back();
      cout<<z<<(s-2)<<r<<endl;
    }else{
        cout<<st<<endl;
    }

    }
    return 0;
}