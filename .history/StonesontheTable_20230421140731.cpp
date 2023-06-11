#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int cnt=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='R')
        cout<<"G"<<endl;
        cnt++;
        if(str[i]=='B')
        cout<<"B"<<endl;
    cnt--;
    }
    cout<<cnt<<endl;
}