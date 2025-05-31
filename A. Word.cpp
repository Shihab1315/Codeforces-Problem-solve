
#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cin>>s;
    int cu=0,cl=0;
    for(int i=0;i<s.size();i++){
       if(s[i]>='a' && s[i]<='z'){
        cl++;
       }else{
        cu++;
       }
    }
    if(cl>=cu){
        for(int i=0;i<s.size();i++){
             if(s[i]>='A' && s[i]<='Z'){
               s[i]=tolower(s[i]);
             }
       }
    }else{
        for(int i=0;i<s.size();i++){
             if(s[i]>='a' && s[i]<='z'){
                s[i]=toupper(s[i]);
             }
       }
    }
    cout<<s<<endl;

    return 0;
}