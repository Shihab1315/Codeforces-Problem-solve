
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int Sereja=0,Dima=0;
    int step=1;
    // int i=0,j=n-1;
    // while(i<=j){
    //     if(step%2!=0){
            
    //     if(v[i]>v[j]){
    //         Sereja+=v[i];
    //         i++;
    //     }else{
    //         Sereja+=v[j];
    //         j--;
    //     }
    //     }else{ 
    //     if(v[i]>v[j]){
    //         Dima+=v[i];
    //         i++;
    //     }else{
    //         Dima+=v[j];
    //         j--;
    //     }
    //     }
    //      step++;
    // }
    while(!v.empty()){
        if(step==1){
            if(v[0]>v.back()){
                Sereja+=v[0];
                v.erase(v.begin());
            }else{
                Sereja+=v.back();
                v.pop_back();
            }
            step=2;
        }else{
            if(v[0]>v.back()){
                Dima+=v[0];
                v.erase(v.begin());
            }else{
                Dima+=v.back();
                v.pop_back();
            }
            step=1;
        }
    }
     cout<<Sereja<<" "<<Dima<<endl;

    return 0;
}