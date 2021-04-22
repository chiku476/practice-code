#include<bits/stdc++.h>
using namespace std;
    int partition(int a[], int s, int e){
        int piot=a[s];
        int count=0;
        for(int i=s;i<=e;i++){
            if(a[i]<piot)
            count++;
        }
         if(count!=0)
             swap(a[count+s],a[s]);
        for(int i=s;i<count;i++){
            for(int j=count+1;j<=e;j++){
                if(a[i]>piot && a[j]<piot){
                    swap(a[i],a[j]);
                    break;
                }
            }
        }
        return count+s;
    }
  void quick_sort(int a[], int s ,int e){
      if(s>=e)
      return;
     int p= partition( a, s, e);
      quick_sort(a ,s ,p-1);
      quick_sort(a,p+1,e);
  }
 
 int main(){
     int n;
     cin>>n;
     int *a=new int[n];
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     quick_sort(a,0,n-1);
      for(int i=0;i<n;i++){
         cout<<a[i]<<" ";
     }
 }