#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
 string str;
 cin>>str;
 int cnt=0;
 for(int i=0;i<str.length();i++){
    if(str[i]==str[i+1]){
        
    cnt++;
    }
    cout<<cnt<<endl;
 }
return 0;
}