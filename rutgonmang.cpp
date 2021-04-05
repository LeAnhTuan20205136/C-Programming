#include<iostream>

using namespace std;

int main()
{
	int n, a[1000];
	bool kt = true;
	cout << "nhap so phan tu: " << endl;
	cin >> n;
	cout << "nhap day so input: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << "Output la:" << a[0] << " ";
	for (int i = 1 ; i < n; i++)
	{
		for(int j = 0; j < i; j++)
		{
			if(a[j] == a[i]) 
			{
				kt = false;
				break;
			}			
		}
		if (kt == true)
		{
			cout << a[i] << " ";
		}					
	}
	return 0;
}
