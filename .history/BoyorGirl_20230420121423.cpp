//97 to 122
#include<bits/stdc++.h>
using namespace std;
int main(){
  string str;
  cin>>str;
 sort(str.begin(),str.end());
 int cnt=0;
//   for(int i=0;i<str.size();i++){
    for(int i=97;i<122;i++){}
    if(str[i]!=str[i-1])
    cnt++;
  }
if(cnt%2==0){
    cout<<"IGNORE HIM!"<<endl;
}
else{
    cout<<"CHAT WITH HER!"<<endl;
}
   
    return 0;
}