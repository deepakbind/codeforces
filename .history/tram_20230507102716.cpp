#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int cnt=0;
    int res=0;
    int a,b;

        cin>>a>>b;
    for(int i=0;i<n;i++){
        cnt-=a;
        cnt+=b;
        res=max(res,cnt);
    }
    cout<<res;
}