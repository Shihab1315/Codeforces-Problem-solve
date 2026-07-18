#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        int f=v[0];
        string s;
        s+='1';

        int last=f,index=-1;

        for(int i=1;i<n;i++)
        {
            if(v[i] >= last)
            {
                s+='1';
                last=v[i];
            }
            else if(v[i] <= f)
            {
                s+='1';
                last=v[i];
                index=i;
                break;
            }
            else
            {
                s+='0';
            }
        }

        if(index!=-1)
        {
            for(int i=index+1;i<n;i++)
            {
                if(last<=v[i] && v[i]<=f)
                {
                    s+='1';
                    last=v[i];
                }
                else
                {
                    s+='0';
                }
            }
        }

        cout<<s<<'\n';
    }

    return 0;
}