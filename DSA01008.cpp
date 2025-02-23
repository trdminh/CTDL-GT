#include <bits/stdc++.h>

using namespace std;

void created(int n, int a[])
{
    for(int i = 1; i <= n; i++)
    {
        a[i] = 0;
    }
}

void generated(int n, int a[], bool &ok)
{
    int i = n;
    while (i>=0 && a[i] == 1)
    {
        /* code */
        a[i] = 0;
        i--;
    }
    if(i == 0)
    {
        ok = 0;
    }
    else
    {
        a[i] = 1;
    }
    
}
bool check(int n, int a[], int k)
{
    int cnt = 0;
    for(int i = 1; i <= n; i++)
    {
        if (a[i] == 1)
        {
            cnt++;
        }
    }
    if(cnt == k)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n, k;
        cin >> n >> k;
        int a[n+1];
        created(n,a);
        bool ok = 1;
        while (ok)
        {
            /* code */
            if(check(n,a,k))
            {
                for(int i = 1; i <= n; i++)
                {
                    cout << a[i];
                }
                cout << endl;
            }
            generated(n,a,ok);
        }
        
    }
    
}