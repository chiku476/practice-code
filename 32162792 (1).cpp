//https://www.codechef.com/LRNDSA01/problems/ZCO14003
#include <bits/stdc++.h>
using namespace std;

int main() { 
       // int t;
       // cin>>t;
       // while(t--){
          long long n;
          cin>>n;
          int a[n];
          for(long long i=0;i<n;i++ )
          cin>>a[i];
          sort(a,a+n);
          long long g=0,d;
          for(long long i=0;i<n;i++ ){
              d=a[i]*(n-i);
              if(g<d)
              g=d;
          }
         cout<<g<<endl;  
      //  }
	// your code goes here
	return 0;
}
