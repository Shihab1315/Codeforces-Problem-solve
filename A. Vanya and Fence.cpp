
#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long n,h,count=0;
    cin>>n>>h;
    while(n--){
        int s;
        cin>>s;
        if(s>h){
            count+=2;
        }else{
            count+=1;
        }
    }
   cout<<count<<endl;
    return 0;
}