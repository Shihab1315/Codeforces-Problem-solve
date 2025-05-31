
#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
       int t;
       cin>>t;
       while(t--){
        char arr[3][3];
        int a1=0,b1=0,c1=0;
        for(int i=0;i<3;i++){   
            for(int j=0;j<3;j++){
                cin>>arr[i][j];
                if(arr[i][j]=='A'){
                    a1++;
                }else if(arr[i][j]=='B'){
                    b1++;
                }else{
                    c1++;
                }    
            }
        }
        if(a1!=3){
            cout<<'A'<<endl;
        }else if(b1!=3){
            cout<<'B'<<endl;
        }else{
            cout<<'C'<<endl;
        }
       }
    return 0;
}