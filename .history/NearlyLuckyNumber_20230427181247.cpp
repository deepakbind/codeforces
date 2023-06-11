#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
      if(a[i]=='4' || a[i]=='7')
      cout<<"YES"<<endl;
      else
      cout<<"NO"<<endl;
      break;
    }
    return 0;
}