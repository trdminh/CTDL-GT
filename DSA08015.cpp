#include <iostream>


using namespace std;
void swap(int &a, int &b);
int partition(int arr[],int l, int r);
void quick_sort(int arr[], int l, int r);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        quick_sort(a,0,n-1);
        for(int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    
}

void swap(int &a, int &b)
{
    int x = a;
    a = b;
    b = x;
}

int partition(int arr[], int l, int r)
{
    int pivot = arr[r];
    int i = l-1;
    for (int j = l; j < r; j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[i+1],arr[r]);
    return i+1;
}

void quick_sort(int arr[], int l, int r)
{
    if(l < r)
    {
        int pivot_idx = partition(arr,l,r);
        quick_sort(arr,l,pivot_idx-1);
        quick_sort(arr, pivot_idx+1,r);
    }
}