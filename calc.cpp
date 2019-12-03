//файл calc.cpp 
#include "stdafx.h" 
#include "func.h" 
#include <iostream> 
using namespace std;

int main() 
{	
	setlocale(LC_ALL, "rus");

	int c;
	double x, y;
	
	cout << "Введите X" << endl;
	cin >> x;
	cout << "Введите Y" << endl;
	cin >> y;
	cout << "1:Сумма 2:Вычитание 3:Умножение 4:Деление" << endl;
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
		cout << "Несуществующая функция" << endl;
		break;
	}
	system("pause");
	return 0;
}