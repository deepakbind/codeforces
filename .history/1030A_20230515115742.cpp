#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
   
    for(int i=0;i<n;i++){
  cin>>a[i];
  if(a[i]==1){
  cnt++;
  }
    }
    if(cnt==0){
    cout<<"EASY";
    }
    else{
    cout<<"HARD";
    }
    return 0;
}