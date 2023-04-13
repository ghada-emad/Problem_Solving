#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin >> t;
	int n;
	while (t--)
	{
		cin >> n;
		long long int arr1[n];
		long long int arr2[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr1[i];
			arr2[i] = arr1[i];
		}
		sort(arr2, arr2 + n);
		for (int i = 0; i < n; i++)
		{
			if (arr1[i] != arr2[n - 1])
			{
				cout<< arr1[i] - arr2[n - 1]<<" ";
			}
			else {
				cout << arr1[i] - arr2[n - 2]<<" ";
			}
		}
		cout << endl;
	}
   
}
