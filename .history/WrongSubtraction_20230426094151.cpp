#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,n;
    cin>>x>>n;
    for(int i=0;i<n;i++){
        if(n%10==0){
        n=n/10;
        }
        else{
        x--;
        }
    }
    cout<<x;
    return 0;
}