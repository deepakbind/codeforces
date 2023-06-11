//97 to 122
#include<bits/stdc++.h>
using namespace std;
int main(){
  string str;
  cin>>str;
 sort(str.begin(),str.end());
 int cnt=0;
  for(int i=0;i<str.size();i++){
    if(str[i]!=str[i-1])
    cnt++;
  }
if(cnt%2==0){
    cout<<""
}
   
    return 0;
}