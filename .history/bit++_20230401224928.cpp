#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int x=0;
        for(int i=1;i<=n;i++){
            if(arr[i]==++x)
            cout<<1<<endl;
        else if(arr[i]==++x && arr[i]==x--)
        cout<<
        }
    }
    return 0;
}