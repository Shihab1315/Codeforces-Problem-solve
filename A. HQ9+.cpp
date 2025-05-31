
#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cin>>s;
    int i=0;
    while(i<s.size()){
        if(s[i]=='H' || s[i]=='Q'|| s[i]=='9'){
            cout<<"YES"<<endl;
            break;
        }else{
            i++;
        }
    }
    if(i==s.size()){
        cout<<"NO"<<endl;
    }

    return 0;
}