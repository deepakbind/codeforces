#include<bits/stdc++.h>
#include<string>

using namespace std;

int main(){
    string s;
    cin>>s;
    map<char,int>mp;
    for(int i=0;i<s.size();i++){
        if(s[i]!='+')
        mp[s[i]]++;
    }
    int c=0;
    for(auto x:mp){
        while(x.second){
        cout<<x.first
        c++;
        }
    }

}