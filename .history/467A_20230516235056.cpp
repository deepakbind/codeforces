#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
   
    for(int i=1;i<n;i++){
        cin>>a[i];

    }
    int cnt=0;
    for(int i=1;i<n;i++){
        if((p-q)>=2){
        cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}