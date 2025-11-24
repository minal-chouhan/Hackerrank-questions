#include <bits/stdc++.h>
using namespace std;

long repeatedString(string s, long n) {
    int k = s.size();
    if(k==1){
      return(s[0]=='a')?n:0;  
    } 
    long count=0;
for(int i=0;i<k;i++){
    if(s[i] == 'a'){
        count+=1;
    }
}
long a= n%k;
long b= n/k;
long result = b * count;

if(a!=0){for(int i=0;i<a;i++){
      if(s[i] == 'a'){
        result+=1;
    }
}}
return result;
}


int main(){
string s = "ansba";
long n =1000;
cout<< repeatedString( s,  n);

    return 0;
}