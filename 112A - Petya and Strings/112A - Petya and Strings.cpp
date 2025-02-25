#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    
    for(int i = 0; i < min(s1.length(), s2.length()); i++) {
        char c1 = tolower(s1[i]);
        char c2 = tolower(s2[i]);
        if(c1 < c2) {
            cout << -1 << endl;
            return 0;
        }
        if(c1 > c2) {
            cout << 1 << endl;
            return 0;
        }
    }
    
    if(s1.length() < s2.length()) cout << -1 << endl;
    else if(s1.length() > s2.length()) cout << 1 << endl;
    else cout << 0 << endl;
    
    return 0;
}