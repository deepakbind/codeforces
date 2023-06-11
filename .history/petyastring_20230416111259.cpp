#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    //lowercase will be start 97 and uppercase will be start 92
    for(int i=0;i<s1.size();i++){
   if(s1[i]<92){
    s1+=32;
   }
if(s2[i]<92){
    s2+=32;
}
if(s1<s2){
    cout<<"-1"<<endl;
}
if(s2>s1)
    }
}