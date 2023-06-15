#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n+1]={0};
    int a,b;
    cin>>a;
    int level;
   for(int i=0;i<a;i++){
    cin>>level;
    arr[level]=1;
   }
   cin>>b;
   for(int i=0;i<b;i++){
    cin>>level;
    arr[level]=1;
   }
   for(int i=1;i<=n;i++){
    if(arr[i]==1)
    cout<<"I become the guy.";
    return 0;
   }
    cout<<"Oh, my keyboard!";
 return 0;
}