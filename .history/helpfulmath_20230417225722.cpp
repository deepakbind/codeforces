#include <bits/stdc++.h>
#include <string>
#include<cmath>
using namespace std;

int main()
{
    string s;
    cin>>s;
   vector<char>nums;
   for(auto i:s){
    if(i!='+')
    nums.push_back(i);
   }
   sort(nums.begin(),nums.end());
   string str;
   for(auto i:nums){
     str+= i;
     str += "+";
   }
   str.pop_back();
   cout<<str<<endl;
}