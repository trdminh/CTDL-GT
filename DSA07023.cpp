#include <bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin >> t;
    t++;
    while(t--)
    {
        string s;
        getline(cin,s);
        stack <string> st;
        stringstream check(s);
        string inter;
        while (getline(check, inter, ' '))
        {
            /* code */
            st.push(inter);
        }
        while (st.size())
        {
            /* code */
            cout << st.top() << " ";
            st.pop();
        }
            
        cout << endl;
        
    }
}