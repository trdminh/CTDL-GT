#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        int ok = 0;
        int a[n+1];
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for(int i = n - 1; i >= 1; i--)
        {
            if(a[i] < a[i+1])
            {
                ok = 1;
                sort(a + i, a + n + 1);
                swap(a[i],a[i+1]);
                break;
            }
        }
        if(ok == 0)
        {
            for (int i = 1; i <= n; i++)
                a[i] = i;
        }
        for(int i = 1; i <= n; i++)
            cout << a[i] << " "; 
        cout << endl;
    }
    
}