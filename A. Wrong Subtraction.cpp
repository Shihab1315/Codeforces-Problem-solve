
#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long n,k;
    cin>>n>>k;
    while(k-- && n!=0)
    {
        int last=n%10;
        if(last==0){
            n/=10;
        }else{
            n-=1;
        }
    }
    cout<<n<<endl;

    return 0;
}