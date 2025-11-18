
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
       int a,b,c,d;
       cin>>a>>b>>c>>d;
       int f=abs(a-b);
       int mx=max(a,b);
       int mn=min(a,b);
       int x;
       bool ft=false;
       int count=0;
      if(a>b){
           x=12-a+b;
      }else{
        x=12-b+a;
      }
   if(f>x){
    for(int i=mx;i<=12;i++){
        if(i==c || i==d){
            count++;
                  ft=true;
                 
            }
    }
    for(int i=1;i<=mn;i++){
        if(i==c || i==d){
            count++;
                  ft=true;
                  
            }
    }
   }else{
     if(a<b){
        for(int i=a;i<=b;i++){
            if(i==c || i==d){
                count++;
                  ft=true;
                 
            }
        }
       }else{
           for(int i=b;i<=a;i++){
            if(i==c || i==d){
                count++;
                  ft=true;
                 
            }
        }
       }
   }
      
        
       
       if(ft==true && count!=2){
       yes;
       }else{
        no;
       }
    }
    
    return 0;
}