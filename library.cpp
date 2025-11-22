#include <bits/stdc++.h>
using namespace std;

int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {

//    if((d1<=d2 && m1<=m2 && y1<=y2)||(m1<m2 && y1==y2) || (y1<y2)){
//     return 0;
//    }
//     else  if(d1>d2 && m1==m2 && y1==y2){
//     return (d1-d2)*15;
//    }
//    else if(y1 != y2 && y1>=y2){
//     return 10000;
//    }
//    else if(m1>=m2 &&  y1==y2){
//     return (m1-m2)*500;
//    }
// return -1;




    int res = 0;
    if (y1 > y2) {
        res = 10000;
    } else if (y1 == y2 & m1 > m2) {
        res = (m1 - m2) * 500;
    } else if (y1 == y2 & m1 == m2 & d1 > d2) {
        res = (d1 - d2) * 15;
    }

    return res;

}

int main(){
  int d1=1,m1=7,y1=2018,d2=2,m2=7,y2=2018; 
cout << libraryFine( d1, m1, y1,  d2,  m2,  y2) ;


    return 0;
}