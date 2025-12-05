#include <bits/stdc++.h>
using namespace std;
void printPerm(string str,string Permutation){
    if(str.length() == 0){
       cout<<Permutation<<endl;
        return;
    }
    for(int i=0;i<str.length();i++){
        char currChar = str[i];
        string newstr = str.substr(0,i) + str.substr(i+1);
        printPerm(newstr,Permutation+currChar);
    }
}
int main() {
   
       string str ="abc";
       printPerm(str,"");
   
    return 0;
}