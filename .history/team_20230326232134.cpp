#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,b,c;
    cin>>a>>b>>c;
    int n;
    cin>>n;
    int arr[n];
     for(int i=0;i<n;i++){
     arr[i]=a+b+c;
     }
     int ans=0;
     for(int i=0;i<n;i++){
     if(arr[i]>=2){
     ans++;
     }
  }
  cout<<ans<<endl;
  return 0;
}