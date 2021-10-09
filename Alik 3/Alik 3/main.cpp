#include "Date.h"
#include <iostream>
void main()
{
	setlocale(LC_ALL, "ru");
	Triad one(1, 2, 3);
	Triad two(1, -2, 5);
	bool a = one == two;
	cout << a << "\n";
	Date data(2, 4, 3);
	Date data2(10, 4, 3);
	bool b = data2 < data;
	cout << b << "\n";
	cout << one << "\n";
	cout << data;
}