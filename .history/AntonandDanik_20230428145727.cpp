#include<bits/stdc++.h>

using namespace std;
int main(){
    string s;
    cin>>s;
    int cntA=0,cntB=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='A'){
        cntA++;
        }
        else{
        cntB++;
    }
    if(cntA>cntB){
    cout<<"Anton";
    }
    else if(cntB>cntA){
    cout<<"Danik";
    }
    else{
    cout<<"Friendship";
    }
    return 0;
}