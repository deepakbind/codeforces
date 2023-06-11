// #include <iostream>
// #include <cmath>

// using namespace std;

// int main()
// {
//     int x = 0;
//     for (int i = 1; i <= 5; ++i)
//     {
//         for (int j = 1; j <= 5; ++j)
//         {
//             cin >> x;
//             if (x == 1)
//             {
//                 cout << abs(i - 3) + abs(j - 3) << endl;
//             }
//         }
//     }
//     return 0;
// }
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt=0;
    cin>>cnt;
    for(int i=0;i<n;i++){
        if(arr[i]=="_")
        cnt++;
    }
    cout<<cnt<<endl;
    }
    return 0;
}