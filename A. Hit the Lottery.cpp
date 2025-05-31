#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long count = 0;
    int coins[] = {100, 20, 10, 5, 1};
    
    for(int i = 0; i < 5; ++i){
        count += n / coins[i];
        n %= coins[i];
    }
    
    cout << count << endl;
    return 0;
}
//another way
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
// long long  n;
// cin>>n;
// long long count=0,sum=0;
// while(n>0){
//     if(n>=100 &&  n%100==0){
//        sum=n/100;
//        count+=sum;
//        break;
//     }else if(n>=100 &&  n%100!=0){
//         sum=n/100;
//         count+=sum;
//         n=(n-sum*100);
//     }else if(n>=20 && n<100 && n%20==0){
//        sum=n/20;
//        count+=sum;
//        break;
//     }else if(n>=20 && n<100 && n%20!=0){
//         sum=n/20;
//         count+=sum;
//         n=(n-sum*20);
//     }else if(n>=10  && n<20 && n%10==0 ){
//          sum=n/10;
//        count+=sum;
//        break;
//     }else if(n>=10 && n<20 && n%10!=0){
//         sum=n/10;
//         count+=sum;
//         n=(n-sum*10);
//     }else if(n>=5  && n<10 && n%5==0 ){
//          sum=n/5;
//        count+=sum;
//        break;
//     }else if(n>=5 && n<10 && n%5!=0){
//         sum=n/5;
//         count+=sum;
//         n=(n-sum*5);
//     }else{
//         count+=n;
//         break;
//     }
// }
//    cout<<count<<endl;

//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long count = 0;
    int coins[] = {100, 20, 10, 5, 1};
    
    for(int i = 0; i < 5; ++i){
        count += n / coins[i];
        n %= coins[i];
    }
    
    cout << count << endl;
    return 0;
}
