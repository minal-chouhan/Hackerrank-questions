#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=3;
    int c=0;
    
    if(n%2 == 0)
    
    {
        while(n!=0 && n>0){
            
        if((n%2==0) && (n%4==0)){
            c+=2;
            n-=2;
             
        }
        else if((n%2>0) && (n%4>0)){
            c+=2;
            n-=2;
           
        }
        else if((n%2 == 0) && (n%4 !=0)) {
            c+=1;
           
            
        }
        else if((n%2 != 0) && (n%4 ==0)) {
            c+=1;
           
        }
        n-=4;
    }
        
    }
    cout << c;
    
    return 0;
}