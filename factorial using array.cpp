//program name
//Life, the Universe, and Everything  
#include <bits/stdc++.h>
using namespace std;
#define max 500
int multiply(int x,int a[], int a_size);
int main() {
	// your code goes here
	int x;
	cin>>x;
	int a[max];
	a[0]=1;
	int a_size=1;
	for(int i=2;i<=x;i++)
	a_size=multiply(i,a,a_size);
		for(int i=a_size-1;i>=0;i--)
		cout<<a[i];
	return 0;
}
          int multiply(int x,int a[], int a_size){
             int carry=0;
             for(int i=0;i<a_size;i++){
             int prod=a[i]*x+carry;
             a[i]=prod%10;
             carry=prod/10;
             }
             while(carry){
                 a[a_size]=carry%10;
                 carry=carry/10;
                 a_size++;
             }
             return a_size;
          }
