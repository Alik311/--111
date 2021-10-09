#pragma once
#include "Progres.h"
/*
* \breif класс наследник виртуальной функции геом. прогресс.
*/
class geo : public Progress
{
/*
* \breif параметры класса
*/
private:
	double first;
	double q;
	double n;
public:
	/*
	* \breif конструкто с параметрами
	*/
	geo(const double first, const double q, const double n)
	{
		this->first = first;
		this->q = q;
		this->n = n;
	}
	/*
	* \breif конструкто копирования
	*/
	geo(geo& other) = default;
	/*
	* \breif деструктор по умолчанию
	*/
	~geo() = default;
	/*
	* \breif вывод общей информации о прогресии
	*/
	friend ostream& operator<<(ostream & os, const geo & obj);
	/*
	* \breif н-ый элемент прогресии
	*/
	double element() const override;
	/*
	* \breif сумма прогресии
	*/
	double sum() const override;
	/*
	* \breif функция для сравнения даблов
	*/
	bool double_compare(const double a, const double b) const;
};