
#include<iostream>
using namespace std;

int main(){
    int n,h;
    cin>>n>>h;
    int i;
    int cnt=0;
    while(n--){
        cin>>i;
        if(i>h){
            cnt+=2;
        }
        else{
            cnt+=1;
        }
        cout<<cnt;
    }
}