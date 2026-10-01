#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    stack<char> st;

    for(char c : s) {
        st.push(c);
    }

    for(char c : s) {
        if(c != st.top()) {
            cout << "Not Palindrome";
            return 0;
        }
        st.pop();
    }

    cout << "Palindrome";

    return 0;
}