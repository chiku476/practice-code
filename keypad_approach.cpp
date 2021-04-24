#include<bits/stdc++.h>
using namespace std;


const char hashtable[10][5] {
    "", "", "abc", "def", "ghi", 
    "jkl", "mno", "pqrs", "tuv", "wxyz"
    };
void keypad(int array[], int a, int n ,char s[]){
    if(a==n){
        cout<<s<<" ";
        return;
    }
     for(int i=0;i<strlen(hashtable[array[a]]); i++){
         s[a]=hashtable[array[a]][i];
         keypad(array, a+1 , n , s);
        // if(array[a]==0 || array[a]==1)
     //    return;
     }

}


int main(){
       int p;
       cin>>p;
       int g=p;
       int count1=0;
       vector<int>v;
       while(p!=0){
           p=p/10;
           count1++;
       }
       int array[count1];
       for(int i=count1-1; i>=0; i--){
           array[i]=g%10;
           g=g/10;
       }
      char s[count1+1];
      s[count1]='\0';
    keypad(array , 0 , count1 , s);
    
}