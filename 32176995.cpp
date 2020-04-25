//https://www.codechef.com/LRNDSA01/problems/FCTRL
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        int a=1,count=0;
       while(pow(5,a)<=n){
          count+=n/pow(5,a);
          a++;
       }
        cout<<count<<endl;
    }
	// your code goes here
	return 0;
}
