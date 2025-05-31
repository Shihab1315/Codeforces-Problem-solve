
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
        cin >> ans[i];
    }

    int s =ans[k - 1]; 
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (ans[i] >= s && ans[i] > 0) {
            count++;
        }
    }

    cout << count << endl;
  //another way
  
    // int n, k, count = 0;
    // cin >> n >> k;
    // vector<int> ans;
    // int j=0;
    // while (n--)
    // {
    //     int a;
    //     cin >> a;
    //     ans.push_back(a);
    // }
    // if (ans[k - 1] == 0 && k - 1 > 1)
    // {
    //     for (int i = k - 1; i > 0; i--)
    //     {
    //         if (ans[i] != ans[i - 1])
    //         {
    //             cout << i << endl;
    //             break;
    //         }else{
    //             j=i;
    //         }  
    //     }
    //     if(j==1){
    //         cout<<0<<endl;
    //     }
        
    // }
    // else if(ans[k - 1] == 0 && k - 1 <= 1)
    // {
    //     if(k-1!=0 && ans[0]!=0){
    //         cout<<1<<endl;
    //     }else{
    //     cout << 0 << endl;
    //     }
    // }
    // if (ans[k - 1] != 0)
    // {
    //     if (k - 1 != ans.size())
    //     {
    //         for (int i = k - 1; i < ans.size() - 1; i++)
    //         {
    //             if (ans[i] == ans[i + 1])
    //             {
    //                 count++;
    //             }
    //             else
    //             {
    //                 break;
    //             }
    //         }
    //         count += k;
    //         cout << count << endl;
    //     }
    //     else
    //     {
    //         cout << k << endl;
    //     }
    // }

    return 0;
}