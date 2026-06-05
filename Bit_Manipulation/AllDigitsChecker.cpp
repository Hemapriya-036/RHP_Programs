#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int flag = 0;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            flag |= (1 << (s[i] - '0'));
        }
    }
    
    const int ALL_DIGITS = (1 << 10) - 1;
    cout << ((flag == ALL_DIGITS) ? "yes" : "no");
    return 0;
}
