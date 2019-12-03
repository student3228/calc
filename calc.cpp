//файл calc.cpp 
#include "stdafx.h" 
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
	case 2:
	case 3:
	case 4:
		cout << "Выбранная функция в разработке" << endl;
		break;
	default:
		cout << "Несуществующая функция" << endl;
		break;
	}
	system("pause");
	return 0;
}