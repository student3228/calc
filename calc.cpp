//���� calc.cpp 
#include "stdafx.h" 
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
	case 2:
	case 3:
	case 4:
		cout << "��������� ������� � ����������" << endl;
		break;
	default:
		cout << "�������������� �������" << endl;
		break;
	}
	system("pause");
	return 0;
}