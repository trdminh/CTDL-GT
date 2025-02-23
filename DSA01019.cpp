#include <bits/stdc++.h>

using namespace std;

void created(int n, char s[]) {
    s[0] = 'H';
    for (int i = 1; i < n; i++) {
        s[i] = 'A';
    }
}

void generated(int n, char *s, bool &ok) {
    int i = n - 1;
    while (i >= 0 && s[i] == 'H') {
        s[i] = 'A';
        i--;
    }
    if (i < 0) {
        ok = false;
    } else {
        s[i] = 'H';
    }
}
bool check(int n, char s[])
{
    if(s[0] != 'H' || s[n-1] != 'A')
    {
        return 0;
    }
    for(int i = 0; i < n-2; i++)
    {
        if(s[i] == 'H' && s[i+1] == 'H')
        {
            return 0;
        }
    }
    return 1;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char s[n + 1];  // Ensure proper size
        s[n] = '\0';    // Null-terminate for safety
        bool ok = true; // Reset `ok` for each test case
        
        created(n, s);
        while (ok) {
            if(check(n,s))
            {
            cout << s << endl;
            }
        generated(n, s, ok);
    }
    }
    return 0;
}