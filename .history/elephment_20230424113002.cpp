#include<bits/stdc++.h>
using namespace std;

int main(){
  /* int x;
    cin>>x;
    int total=0;
    while(x){
        if(x==1|| x==2|| x==3|| x==4|| x==5){
         total+=1;
         cout<<total;
         return 0;
        }
        x=x-5;
        total++;
    }
    return 0;*/


    int n,s;
    cin>>n>>s;
    s=n/5;
    if(n%5==0){
    cout<<s;
    }
    else{
        s=s+1;
    }
    
    
    return 0;

}