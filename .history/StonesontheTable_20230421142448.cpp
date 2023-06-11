#include<bits/stdc++.h>
using namespace std;

int main(){
 
 int n;
 cin>>n;
 int cnt=0;
 string str;
 cin>>str;
 for(int i=1;i<str.size();i++){
    if(str[i]==str[i-1])
    cnt++;
 }
return 0;
}