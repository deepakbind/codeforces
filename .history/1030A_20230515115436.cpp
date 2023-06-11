#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    int arr[a];
   
    for(int i=0;i<a;i++){
  cin>>arr[i];
  if(arr[i]==1){
  cnt++;
  }
    }
    if(cnt==0){
    cout<<"HARD";
    }
    else{
    cout<<"EASY";
    }
    return 0;
}