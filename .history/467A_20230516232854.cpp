#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int p,q;
    cin>>p>>q;
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(p-q>=2){
           cout<<cnt<<endl;
        }
    }
    return 0;
}