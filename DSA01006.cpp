#include <bits/stdc++.h>
using namespace std;

void generated(int n)
{
    vector<int> perm(n);
    for(int i = 0; i < n; i++)
    {
        perm[i] = n - i;
    }
    do
    {
        /* code */
        for(int num : perm)
        {
            cout << num;
        }
        cout << " ";
    } while (prev_permutation(perm.begin(), perm.end()));
    
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        generated(N);
        cout << endl;
    }
    return 0;
}
