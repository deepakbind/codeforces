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
            return 1;
        else if(arr[i]==++x && arr[i]==x--)
        return 0;
        }
    }
    return 0;
}