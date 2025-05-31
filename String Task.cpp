
#include <bits/stdc++.h>

using namespace std;
bool vowel(char d){
    return (d=='a'||d=='e'||d=='i'||d=='o'||d=='u'||d=='y');
}
int main()
{

string s,ans;
cin>>s;
for(auto u:s){
    char d=tolower(u);
    if(!vowel(d)){
        ans+=".";
        ans+=d;
    }
}
cout<<ans<<"\n";

    return 0;
}
