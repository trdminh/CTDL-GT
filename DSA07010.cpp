#include <bits/stdc++.h>

using namespace std;

string ts = "+-*/";

bool check(char c)
{
    for(int i = 0; i < ts.length(); i++)
    {
        if(c == ts[i])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        string s,k1,k2;
        cin >> s;
        stack <string> st;
        for(int i = s.length(); i >= 0; i--)
        {
            if(check(s[i]))
            {
                k1 = st.top();
                st.pop();
                k2 = st.top();
                st.pop();
                k1 = k1 + k2 + s[i];
                st.push(k1);
            }
            else
            {
                st.push(string(1,s[i]));
            }
        }
        cout << st.top() << endl;
    }
    
}