#pragma once
#include <ostream>
#include <cmath>
using namespace std;
/*
* \breif виртуальная функция прогресии
*/
class Progress
{
private:
public:
	/*
	* \breif виртуальаня функция вычисляющая н-ый элемент прогресии
	*/
	virtual double element() const = 0;
	/*
	* \breif виртуальная функция вычисляющая сумму элементов прогресии
	*/
	virtual double sum() const = 0;
	/*
	* \breif деструктор по умолчанию
	*/
	~Progress() = default;
};