
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
   while(t--){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }   
    int c1=0,c2=0;
    bool ft=false;
    int index=0;
    for(int i=0;i<n-2;i++){
        if(a[i]==1 && c2==0){
            ft=true;
            index=i+1;
            break;
        }else if(a[i]==2 or a[i]==3){
            c2++;
        }else{
            c1++;
        }

        if(c1==c2){
            ft=true;
            index=i;
            break;
        }
    }
    if(c1>c2){
            ft=true;
            index=n-2;
        }
   



    int c=0,c3=0;
    bool f=false;
    int in=0;
    for(int i=index;i<n-1;i++){
        if(a[i]==1 or a[i]==2 && c3==0){
            f=true;
            in=i+1;
            break;
        }else if( a[i]==3){
            c3++;
        }else{
            c++;
        }

        if(c==c3){
            f=true;
            in=i;
            break;
        }
    }
    if(c>c3){
            f=true;
            in=n-1;
        }
        if(ft && f){
            if(in<n){
               yes;
            }else{
                no;
            }
           
   }
}
    return 0;
}