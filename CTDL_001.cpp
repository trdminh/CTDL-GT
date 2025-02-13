#include<iostream>

using namespace std;

void setup(int n, int a[]);
void create(int n, int a[]);
bool check(int n,int a[]);

bool ok = 1;
int main()
{
	int n;
	cin >> n;
	int a[n];
	setup(n,a);
	while(ok)
	{
		if(check(n,a) == 1)
		{
			for (int j = 1; j <= n; j++)
			{
				cout << a[j] << " ";
			}
			cout << endl;
		}
		create(n, a);
	}
	return 0;	
} 


void setup(int n, int a[])
{
	for(int i = 1; i <= n; i++)
	{
		a[i] = 0;
	}
}

void create(int n,int a[])
{
	int i = n;
	while(i>=1 && a[i] == 1)
	{
		a[i] = 0;
		i--;
	}
	if (i == 0)
	{
		ok = 0;
	}
	else
	{
		a[i] = 1;
	}
}


bool check(int n, int a[])
{
	for (int i = 1; i <= n/2; i++)
	{
		if (a[i] != a[n-i+1])
		{
			return 0;
		}
	}
	return 1;
}
