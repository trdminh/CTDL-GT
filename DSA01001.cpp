#include <bits/stdc++.h>

using namespace std;


bool check(string s)
{
    for(char c : s)
    {
        if (c == '0')
        {
            return false; 
        }
    }
    return true;
}

void generate(string &s)
{
    if(check(s))
    {
        for(char &c : s)
        {
            c = '0';
        }
        s+= '0';
    }
    else
    {
        int i = s.length() - 1;
        while (i >= 0 && s[i] == '1')
        {
            /* code */
            s[i] = '0';
            i--;
        }
        if(s[i] == '0')
        {
            s[i] = '1';
        }
        
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        string s;
        cin >> s;
        generate(s);
        cout << s << endl;
    }
    
}