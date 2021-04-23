#include<bits/stdc++.h>
using namespace std;
int subs(string s , string output[]){
    if(s.empty()){
        output[0]="";
        return 1;
    }
    //string small=s.substr(1);
    int size=subs(s.substr(1) , output);
    for(int i=0;i<size;i++){
        output[i+size]=s[0] + output[i];
    }
    return 2*size;    
}

int main(){
    string s;
    cin>>s;
    int p=s.size();
    int k=pow(2,p);
    string* output = new string[k];
   int count = subs(s  , output);
    for(int i=0; i<count; i++)
    cout<<output[i]<<endl;
}