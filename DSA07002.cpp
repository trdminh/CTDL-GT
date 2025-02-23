#include <bits/stdc++.h>


using namespace std;

int main()
{
    int t;
    int n;
    string s;
    stack <int> st;
    cin >> t;
    while(t--)
    {
        cin >> s;
        if (s == "PUSH")
        {
            cin >> n;
            st.push(n);
        }
        else if (s == "POP")
        {
            if(st.size())
            {
                st.pop();
            }
        }
        else if (s == "PRINT")
        {
            if(st.size())
            {
                cout << st.top() << endl;
            }
            else
            {
                cout << "NONE" << endl;
            }
        }
    }
}