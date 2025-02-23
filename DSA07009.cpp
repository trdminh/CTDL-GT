#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
string ts = "+-*/";
bool check(char c)
{
    for (int i = 0; i < ts.length(); i++)
        if (ts[i] == c)
            return 1;
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        string s,k;
        cin >> s;
        stack <string> st;
        for(int i = s.length(); i >= 0; i--)
        {
            if (check(s[i]))
            {
                k = '(' + st.top();
                st.pop();
                k+= s[i];
                k = k + st.top() + ')';
                st.pop();
                st.push(k);
            }
            else
            {
                st.push(string(1,s[i]));
            }
        }
        cout << st.top() << endl;
    }
    
}