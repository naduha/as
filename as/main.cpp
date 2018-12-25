#include <iostream>
#include "sum.h"




using namespace std;

int main()
{
	double a;
	double b;
	int count;
	cout << "Vvedite pervoe chislo: ";
	cin >> a;
	cout << "Vvedite vtoroe chislo: ";
	cin >> b;
	cout << "1-vuch, 2-del, 3-sum, 4-ymn " << endl;
	cout << "VVedite deistvie: ";
	cin >> count;
	switch (count)
	{
	case 1:
	{
		cout << "ne 7otobo" << endl;
		break;
	}
	case 2:
	{
		cout << "ne 7otobo" << endl;
		break;
	}
	case 3:
	{
		cout << MySum(a,b) << endl ;
		break;
	}
	case 4:
	{
		cout << "He 7oToBo" << endl;
		break;
	}
	}
	system("pause");
	return 0;
}