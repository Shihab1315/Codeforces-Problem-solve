
#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int n = unique( s.begin(), s.end() ) - s.begin();

    if(n%2==0){
        cout<<"CHAT WITH HER!"<<"\n";

    }else{
        cout<<"IGNORE HIM!"<<"\n";
    }

    return 0;
}