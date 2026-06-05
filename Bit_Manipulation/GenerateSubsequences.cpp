/*
Generate All Subsequences Using Bit Masking

This program generates all possible non-empty subsequences
of a given string by using bit masks to represent character
selection. Each bit indicates whether a character is included
or excluded in the current subsequence.

Time Complexity: O(N * 2^N)
Space Complexity: O(N)
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.length();
    for(int ctr = 1; ctr < (1 << n); ctr++){
        string subsequence = "";
        for(int i = 0; i < n; i++){
            if(ctr & (1 << i)){
                subsequence += s[i];
            }
        }
        cout << subsequence << '\n';
    }
    return 0;
}
