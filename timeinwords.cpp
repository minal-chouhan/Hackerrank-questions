#include <bits/stdc++.h>
using namespace std;

string name(int n)
{
    vector<string> words = {
        "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
        "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen",
        "seventeen", "eighteen", "nineteen", "twenty"
    };

    if (n <= 20) return words[n];
    return "twenty " + words[n - 20];
}

string timeInWords(int h, int m)
{
    if (m == 0)
        return name(h) + " o' clock";

    if (m == 15)
        return "quarter past " + name(h);

    if (m == 30)
        return "half past " + name(h);

    if (m == 45)
        return "quarter to " + name(h + 1);

    if (m < 30)
    {
        if (m == 1)
            return "one minute past " + name(h);
        return name(m) + " minutes past " + name(h);
    }

    // m > 30
    int rem = 60 - m;

    if (rem == 1)
        return "one minute to " + name(h + 1);

    return name(rem) + " minutes to " + name(h + 1);
}

// // my
// string name(int n)
// {
//     switch(n){
//         case 0:  return "";
//         case 1:  return "one";
//         case 2:  return "two";
//         case 3:  return "three";
//         case 4:  return "four";
//         case 5:  return "five";
//         case 6:  return "six";
//         case 7:  return "seven";
//         case 8:  return "eight";
//         case 9:  return "nine";
//         case 10: return "ten";
//         case 11: return "eleven";
//         case 12: return "twelve";        // fixed spelling
//         case 13: return "thirteen";
//         case 14: return "fourteen";
//         case 15: return "fifteen";
//         case 16: return "sixteen";
//         case 17: return "seventeen";
//         case 18: return "eighteen";      // fixed spelling
//         case 19: return "nineteen";
//         default: return "invalid";
//     }
// }

// string timeInWords(int h, int m) {

//     string hour = name(h);

//     if(m == 0){
//         return hour + " o' clock";
//     }
//     else if(m == 15){
//         return "quarter past " + hour;
//     }
//     else if(m == 30){
//         return "half past " + hour;
//     }
//     else if(m < 30){
//         if(m < 20){
//             return name(m) + (m==1 ? " minute past " : " minutes past ") + hour;
//         }
//         else {
//             return "twenty " + name(m % 10) + " minutes past " + hour;   // fixed: no h+1
//         }
//     }
//     else if(m == 45){
//         return "quarter to " + name(h+1);
//     }
//     else { // m > 30
//         int a = 60 - m;
//         if(a < 20){
//             return name(a) + (a==1 ? " minute to " : " minutes to ") + name(h+1);
//         }
//         else {
//             return "twenty " + name(a % 10) + " minutes to " + name(h+1);
//         }
//     }
// }


int main()
{
    int h, m;
    cin >> h >> m;
    cout << timeInWords(h, m);
    return 0;
}
