#pragma once
#include "my_exp.h"
/*
* \breif структура комплексных чисел
*/
struct complex
{
	double num1;
	double num2;
	friend ostream& operator<<(ostream& os, const complex& obj);
	friend complex operator/(const complex& first, const complex& second);
};
/*
* \breif класс для деления комплексных чисел
*/
class del
{
private:
	/*
	* \breif параметры класса
	*/
	complex A;
	complex B;
public:
	/*
	* \breif конструктор с параметрами
	*/
	del(const double a, const double ai, const double b, const double bi)
	{
		this->A.num1 = a;
		this->A.num2 = ai;
		this->B.num1 = b;
		this->B.num2 = bi;
	}
	/*
	* \breif конструктор копирования по умолчанию
	*/
	del(del& other) = default;
	/*
	* \breif деструктор по умолчанию
	*/
	~del() = default;
	/*
	* \breif результат деления
	*/
	complex get_result() const;
	/*
	* \brief Функция без спецификации исключений
	*/
	complex no_exp();
	/*
	* \brief Функция со спецификацией throw();
	*/
	complex with_thow() throw();
	/*
	* \brief Функция с конкретной спецификацией с подходящим стандартным исключением
	*/
	complex invalid_throw() throw(invalid_argument);
	/*
	* \brief спецификация с собственным реализованным исключением: как пустой клас
	*/
	complex empty() throw(empty_exeption);
	/*
	* \brief спецификация с собственным реализованным исключением: как независимый класс с полями-параметрами функции
	*/
	complex my_exp1() throw(my_exeption1);
	/*
	* \brief спецификация с собственным реализованным исключением: как наследник от стандартного исключения с полями
	*/
	complex my_exp2() throw(my_exeption2);
	/*
	* \breif сравнение даблов
	*/
	bool double_compare(const double value_a, const double value_b);
};