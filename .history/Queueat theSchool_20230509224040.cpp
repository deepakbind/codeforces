#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    string s;
    while(t--){
     for(int i=0;i<n;i++){
        if(s[i-1]=='B' && s[i]=='G')
        s[i-1]='G';
        s[i]='B';
        i++;
     }
     cout<<s;
    }
    return 0;
}