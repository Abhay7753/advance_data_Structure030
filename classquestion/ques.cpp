// print string revsere with maintain order of special char
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int i = s.size() - 1;
    int j = 0;

    while(j < i) {
        if(!isalpha(s[i])) {
            i--;
        }
        else if(!isalpha(s[j])) {
            j++;
        }
        else {
            swap(s[i], s[j]);
            i--;
            j++;
        }
    }

    cout << s;
}