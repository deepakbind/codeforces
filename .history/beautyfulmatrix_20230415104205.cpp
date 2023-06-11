#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int i,j,r,c;
        cin>>i>>j>>r>>c;
        int arr[5][5];
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                cin>>arr[i][j];
            }
            if(arr[i][j]==1)
            r=abs(3-i);
            c=abs(3-j);
        }
        cout<<(r+c)<<endl;
    }
}