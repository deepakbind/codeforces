#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
 string str;
 cin>>str;
 for(int i=0;i<str.length();i++){
    if(str[i]==str[i+1])
    cnt++;
 }
return 0;
}