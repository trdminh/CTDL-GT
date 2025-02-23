#include <bits/stdc++.h>

using namespace std;

void created(int n, char s[])
{
    for(int i = 1; i <= n; i++)
    {
        s[i] = 'A';
    }
}

void generated(int n, char *s, bool &ok)
{
    int i = n;
    while(i >= 0 && s[i] == 'B' )
    {
        s[i] = 'A';
        i--;
    }
    if(i == 0)
    {
        ok = 0;
    }
    else
    {
        s[i] = 'B';
    }
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        bool ok = 1;
        char s[n+1];
        created(n,s);
        while (ok)
        {
            for(int i = 1; i <= n; i++)
            {
                cout << s[i];
            }
            cout << " ";
            generated(n,s,ok);
        }
        cout << endl;
        
    }
    
    
}