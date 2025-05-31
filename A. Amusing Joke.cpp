
#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s,h,j,k;
    cin>>s>>h>>j;
     int count=0;
    k=s+h;
    if(k.size()!=j.size()){
        cout<<"NO"<<endl;
    }else{
        sort(k.begin(),k.end());
         sort(j.begin(),j.end());
         for(int i=0;i<j.size();i++){
            if(j[i]!=k[i]){
                cout<<"NO"<<endl;
                break;
            }else{
                 count++;
            }
         }
    }
    if(count==k.size()){
        cout<<"YES"<<endl;
    }
   


    return 0;
}