#include<iostream>

using namespace std;
void findmax(int*, int);
int main()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = sizeof(a) / sizeof(a[10]);
	findmax(a, n);
	return 0;
}
void findmax(int*a, int n)
{
	int max = a[0];
	int k = 0;
	for (int i = 1; i < n; i++)
	{
		if (a[i]>max)
		{
			max = a[i];
			k = i;
		}
	}
	cout << "位置在第" << k + 1 << "个"<<endl;
}