
#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    long long drink,f,g;
    drink=(k*l)/nl;
    f=c*d;
    g=p/np;
    if(drink<f && drink<g){
        cout<<drink/n<<endl;
    }else if(drink>f && f<g){
        cout<<f/n<<endl;
    }else{
        cout<<g/n<<endl;
    }

    return 0;
}