//program name
//Life, the Universe, and Everything  
#include <bits/stdc++.h>
using namespace std;

   void merge(int a[], int si, int ei){
     int mid=1+(si+ei)/2;
     int p=mid-si;
     int q=ei-mid+1;
      int d[p];
     int e[q];
      int j=0;
      for(int v=si ; v<mid; v++){
         d[j]=a[v];
        // cout<<d[j]<<" ";
         j++;
        } 
      //  cout<<endl;
       j=0;
      for(int i=mid;i<=ei;i++){
          e[j]=a[i];
       //   cout<<e[j]<<" ";
          j++;
       } 
       // cout<<endl;
        int k=0;int l=0;
       for(int i=si;i<=ei;i++){
           if(l<q && k<p){
               if(d[k]>=e[l]){
                  a[i]=e[l];
                  l++;
                }
                else{
                 a[i]=d[k];
                 k++;
               }
            }
       
           else{
                if(l==q && k<p){
                  a[i]=d[k];
                  k++;  
                }
                if(k==p && l<q){
                a[i]=e[l];
                    l++;
                }
            }
        }
   }
   void merge_sort(int a[],int s, int e){
    if(s>=e)
       return;
       int m=(s+e)/2;
       merge_sort(a ,s,m);
       merge_sort(a,m+1,e);
       merge(a,s,e);
   
}
int main() {
	// your code goes here
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	     cin>>a[i];
	     merge_sort(a,0,n-1);
	      for(int i=0;i<n;i++)
	      cout<<a[i]<<" ";
	    
	}
