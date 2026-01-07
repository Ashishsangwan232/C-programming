#include <bits/stdc++.h>
using namespace std;

int prec(char c) {
    if (c == '+' || c == '-') return 1;
    if (c == '*' || c == '/') return 2;
    if (c == '^') return 3;
    return -1;
}

int main() {
    string infix;
    cin >> infix;

    reverse(infix.begin(), infix.end());

    for (char &c : infix) {
        if (c == '(') c = ')';
        else if (c == ')') c = '(';
    }

    stack<char> st;
    string prefix = "";

    for (char ch : infix) {
        if (isalnum(ch)) {
            prefix += ch;
        }
        else if (ch == '(') {
            st.push(ch);
        }
        else if (ch == ')') {
            while (!st.empty() && st.top() != '(') {
                prefix += st.top();
                st.pop();
            }
            st.pop();
        }
        else {
            while (!st.empty() && prec(st.top()) > prec(ch)) {
                prefix += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }

    while (!st.empty()) {
        prefix += st.top();
        st.pop();
    }

    reverse(prefix.begin(), prefix.end());

    cout << prefix;
    return 0;
}
