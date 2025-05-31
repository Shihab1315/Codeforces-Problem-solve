
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    while(n--){
        int s;
        cin>>s;
        if(s==1){
           count=1;
           break;
        }
    }
    if(count!=1){
        cout<<"EASY"<<"\n";
    }else{
        cout<<"HARD"<<"\n";
    }
    
    return 0;
}