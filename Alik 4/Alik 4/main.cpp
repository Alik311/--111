#include "arith.h"
#include "geo.h"
#include <iostream>
void main()
{
	setlocale(LC_ALL, "ru");
	arith one(1, 3, 100);
	cout << one << "\n";
	geo two(1, 5, 4);
	cout << two;
}