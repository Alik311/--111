#include "Square.h"
#include <iostream>
void main()
{
	setlocale(LC_ALL, "ru");
	Square one(5, 0, 1);
	cout << one <<"\n";
	cout << one.coord_90();
	
}