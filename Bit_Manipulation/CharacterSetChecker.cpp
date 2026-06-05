/*
Check Presence of All Lowercase Letters, Uppercase Letters,
and Digits Using Bit Masking.

This program verifies whether a string contains all
lowercase letters (a-z), uppercase letters (A-Z),
and digits (0-9) at least once.

Time Complexity: O(N)
Space Complexity: O(1)
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;

    int lowerMask = 0;
    int upperMask = 0;
    int digitMask = 0;

    for(char ch : s){
        if(ch >= 'a' && ch <= 'z'){
            lowerMask |= (1 << (ch - 'a'));
        }
        else if(ch >= 'A' && ch <= 'Z'){
            upperMask |= (1 << (ch - 'A'));
        }
        else if(ch >= '0' && ch <= '9'){
            digitMask |= (1 << (ch - '0'));
        }
    }

    bool allLower = (lowerMask == ((1 << 26) - 1));
    bool allUpper = (upperMask == ((1 << 26) - 1));
    bool allDigits = (digitMask == ((1 << 10) - 1));

    if(allLower && allUpper && allDigits)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
