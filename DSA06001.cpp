#include <iostream>

using namespace std;
void sort(int n,int a[]);
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(n,a);
        for (int i = 0; i < n/2; i++)
        {
            cout << a[i] << " " << a[n-i-1] << " ";
        }
        if (n%2 == 1)
        {   
            cout << a[int(n/2)];
        }
        cout << endl;
    }
    
}

void sort(int n,int a[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
        }
    }
    
}