#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n+1]={0};
    int a,b;
    cin>>a;
    int level;
    cin>>level;
   for(int i=0;i<a;i++){
    arr[level]=1;
   }
   cin>>b;
   for(int i=0;i<b;i++){
    arr[level]=1;
   }
   for(int i=1;i<=n;i++){
    if(arr[i]==1)
    cout<<"I become the guy.";
   }
   
}