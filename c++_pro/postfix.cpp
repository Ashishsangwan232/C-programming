#include <bits/stdc++.h>
using namespace std;

int prec(char c)
{
    if (c == '^')
    {
        return 3;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

void infixtopostfix(string s)
{
    stack<char> st;
    string ns;
    st.push('$');
    int l = s.length();
    for (int i = 0; i < l; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            ns += s[i];
            // st.push(s[i]);
        }
        else if (s[i] == '(')
        {
            st.push('(');
        }
        else if (s[i] == ')')
        {
            while (st.top() != '$' && st.top() != '(')
            {
                char c = st.top();
                st.pop();
                ns += c;
            }
            if (st.top() == '(')
            {
                st.pop();
            }
        }
        else
        {
            while (st.top() != '$' && prec(s[i]) <= prec(st.top()))
            {
                ns += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (st.top() != '$')
    {
        ns += st.top();
        st.pop();
    }
    cout << ns << endl;
}

int main()
{
    string s = "((A+B)*(c+D))/(f+g)";
    infixtopostfix(s);
    return 0;
}