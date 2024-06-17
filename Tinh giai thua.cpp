#include <iostream>
using namespace std;
int main()
{
	int so, x = 1;
	cout << "Ctrinh tinh giai thua\n";
	cout << "Nhap 1 so: ";
	cin >> so;

	cout << "\nsu dung lenh for\n";
	for (int i = 1; i <= so; i++)
	{
		x *=  i;
	}
	cout << so << "! = " << x;

	cout << "\nsu dung lenh while\n";
	x = 1;
	int j = 1;
	while (j <= so)
	{
		x *= j;
		j++;
	}
	cout << so << "! = " << x;
	
	cout << "\nsu dung lenh Do...while\n";
	x = 1;
	int k = 1;
	do {
		x *= k;
		k++;
	} while (k <= so);
	cout << so << "! = " << x;

	system("clr");
	return 0;
}