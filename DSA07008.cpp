#include <bits/stdc++.h>

using namespace std;
string ts = "+-*/";
bool check(char c)
{
    for(int i = 0; i < ts.length(); i++)
    {
        if (c == ts[i])
        {
            return 1;
        }
    }
    return 0;
}
bool Var(char c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
int Deg(char c)
{
    if (c == '^')
        return 50;
    if (c == '*' || c == '/')
        return 100;
    if (c == '+' || c == '-')
        return 300;
    return 1000;
}
int main()
{
    int t; 
    cin >> t;
    while (t--)
    {
        /* code */
        string s, k;
        cin >> s;
        stack <char> st;
        for(int i = 0; i < s.length(); i++ )
        {
            if(s[i] == '(')
            {
                st.push(s[i]);
                continue;
            }
            else if(s[i] == ')')
            {
                while (st.top() != '(')
                {
                    /* code */
                    k += st.top();
                    st.pop();
                }
                
            }

            else if(check(s[i]))
            {
                while (Deg(st.top()) <= Deg(s[i]))
                {
                    k += st.top();
                    st.pop();
                }
                st.push(s[i]);
                continue;
            }
        }
        cout << st.top() << endl;
    }
    
}