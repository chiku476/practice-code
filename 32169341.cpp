                  //question link
				  //https://www.codechef.com/LRNDSA01/problems/LAPIN

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int j,v[26];
        for(int k=97;k<=122;k++)
        v[k]=0;
        int n=str.length();
       // cout<<n<<endl;
        if(n%2==0){
            for(int i=0;i<n/2;i++){
            v[int(str[i])]=v[int(str[i])]+1;
          // cout<< v[int(str[i])]<<endl;
          }
            for(int i=n/2;i<n;i++){
            v[int(str[i])]=v[int(str[i])]-1; //cout<< v[int(str[i])]<<endl;
            }
        }
        else
        {
            for(int i=0;i<n/2;i++)
            v[int(str[i])]=v[int(str[i])]+1;
            for(int i=n/2+1;i<n;i++)
            v[int(str[i])]=v[int(str[i])]-1;
        }
      
        for(j=97; j<=122; j++)
        if(v[j]!=0)
        {
        cout<<"NO"<<endl;
        break;
        }
        if(j==123)
        cout<<"YES"<<endl;
    }
	// your code goes here
	return 0;
}
