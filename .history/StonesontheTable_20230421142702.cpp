#include<bits/stdc++.h>
using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){

 int n=0;
 cin>>n;
 int cnt=0;
 string str;
 cin>>str;
 for(int i=0;i<str.size();i++){
    if(str[i-1]==str[i]){

    cnt++;
    }
 }
    cout<<cnt<<endl;
 }
return 0;
}