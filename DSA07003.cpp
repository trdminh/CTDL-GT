#include <bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        string s;
        cin >> s;
        int ok = 0;
        stack <char> st;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
            {
                st.push(s[i]);
            }
            else if(s[i] == ')')
            {
                if(st.top() == '(')
                {
                    ok = 1;
                    break;
                }
                while (st.size() && st.top() == '(')
                {
                    /* code */
                    st.pop();
                }
                st.pop();
                
            }
        }
        if (ok == 1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    
}