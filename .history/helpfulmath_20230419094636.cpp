#include <bits/stdc++.h>
using namespace std;

int main()
{
  /*  string s;
    cin>>s;
   vector<char>nums;
   for(auto i:s){
    if(i!='+')
    nums.push_back(i);
   }
   sort(nums.begin(),nums.end());
   string str;
   for(auto i:nums){
     str += i;
     str += "+";
   }
   str.pop_back();
   cout<<str<<endl;*/
   string str;
   cin>>str;
   stack<char>s;
   for(int i=0;i<str.size();i++){
    char ch=str[i];
    s.push(ch);
   }
   
}