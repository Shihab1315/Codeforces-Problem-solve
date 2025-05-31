
#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
     int n,c1=0,c2=0,c3=0,count=0;
     cin>>n;
     
     vector<int>v(n);
     for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==1){
            c1++;
        }else if(v[i]==2){
            c2++;
        }else if(v[i]==3){
            c3++;
        }else{
            count++;
        } 
     }
     while(c1!=0 && c3!=0){
         count++;
        c1--;
        c3--;
     }
     count+=c3;
     while(c2>1){
        if(c2%2==0){
        count+=c2/2;
        c2=0;
     }else{
         count+=c2/2;
         c2=1;
     }
     }
     if(c2==1 && c1==1){
        count+=1;
        c1=0,c2=0;
     }else if(c2==1 && c1>1){
        count+=1;
        c2=0,c1-=2;
     }else if(c2==1 && c1==0){
        count+=1;
        c2=0;
     }
     if(c1!=0){
        if(c1%4==0){
            count+=c1/4;
        }else{
            count+=(c1/4)+1;
        }
     }
     cout<<count<<endl;
   
    return 0;
}