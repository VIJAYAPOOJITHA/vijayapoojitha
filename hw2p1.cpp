#include<iostream>
#include<random>
using namespace std;

int MERGESORT(int a[50], int p, int r)
{
	if (p < r)
	{
		int q = (p + r) / 2;
		MERGESORT(a, p, q);
		MERGESORT(a, q + 1, r);
		MERGE( a[50], p, q, r);
	}
}
    int MERGE(int a[50], int p, int q, int r)
    {
        int n1, n2;
        n1 = (q - p) + 1;
        n2 = r - q;
		int l[n1+1];
		int s[n2+1];
		for (int i = 1; i < n1; i++)
		{
			l[i] = a[p + i - 1];
		}
		for (int j = 1; j < n2; j++)
		{
			s[j] = a[q+j];
		}
		l[n1 + 1] = 10000;
	    s[n2 + 1] = 10000;
		int i = 1;
		int j = 1;
		int k;
		for (k = p; k <= r; k++)
		{
			if (l[i] <= s[j])
			{
				a[k] = l[i];
				i = i + 1;
			}
			else
			{
				a[k] = s[j];
				j = j + 1;
			}
		}
}
int main()
{
	int n;
	
	cout << "Enter the number of integers(between 1 and 50)";
	cin >> n;
	int a[50];
	if (n > 50)
	{
		cout << "Entered number is invalid";
		return  0;
	}
	std::random_device rd;  //Will be used to obtain a seed for the random number engine
	std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
	std::uniform_int_distribution<> dis(1, 100);

	for (int i = 0; i < n; ++i)
	{//Use dis to transform the random unsigned int generated by gen into an int in [1, 6]
		a[i] = dis(gen);
	}
	cout << "Before Sorting" << "\n";
	for (int i = 0; i < n; ++i)
	{
		cout << a[i]<< "," << endl;
	}
	MERGESORT(a[50], 0, n-1);
	cout << "After Sorting" << "\n";
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << "," << endl;
	}
	return 0;
}
