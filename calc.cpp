//���� calc.cpp 
#include "stdafx.h" 
#include "func.h" 
#include <iostream> 
using namespace std;

int main() 
{	
	setlocale(LC_ALL, "rus");

	int c;
	double x, y;
	
	cout << "������� X" << endl;
	cin >> x;
	cout << "������� Y" << endl;
	cin >> y;
	cout << "1:����� 2:��������� 3:��������� 4:�������" << endl;
	cin >> c;
	switch (c)
	{
	case 1:
		cout << MySum(x, y) << endl;
		break;
	case 2:
		cout << MySub(x, y) << endl;
		break;
	case 3:
		cout << MyMul(x, y) << endl;
		break;
	case 4:
		cout << MyDiv(x, y) << endl;
		break;
	default:
		cout << "�������������� �������" << endl;
		break;
	}
	system("pause");
	return 0;
}