#pragma once
#include "Progres.h"
/*
* \breif класс наследник виртуальной функции ариф. прогресс.
*/
class arith : public Progress
{
private:
	/*
	* \breif параметры класса
	*/
	double first;
	double dif;
	double n;
public:
	/*
	* \breif конструкто с параметрами
	*/
	arith(const double first, const double dif, const double n)
	{
		this->first = first;
		this->dif = dif;
		this->n = n;
	}
	/*
	* \breif конструкто копирования
	*/
	arith(arith& other) = default;
	/*
	* \breif деструктор по умолчанию
	*/
	~arith() = default;
	/*
	* \breif вывод общей информации о прогресии
	*/
	friend ostream& operator<<(ostream& os, const arith& obj);
	/*
	* \breif н-ый элемент прогресии
	*/
	double element() const override;
	/*
	* \breif сумма прогресии 
	*/
	double sum() const override;
};