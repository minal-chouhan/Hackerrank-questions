#include <bits/stdc++.h>
using namespace std;

int camelcase(string s) {
    int c=1;
for(char x:s){
    if(x>=65 && x<=96){
        c+=1;
    }
}
return c;
}

int main(){
    string s = "saveChangesInTheEditor";
    cout<<camelcase(s); 
}