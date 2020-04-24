//reverse the number
#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ int t;
cin>>t;
  while(t--){
    string str;
    cin>>str;
     int k=0;
    // Reverse str[beign..end] 
   // reverse(str.begin(), str.end()); 
  for(int i=str.length()-1;i>=0;i-- ){
      //char  p=str[i];
      if(str[i] != '0' || k ==1 ){
          k=1;
    cout << str[i]; }
      
  }
    cout << endl;}
    return 0; 
} 
