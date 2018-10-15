/* 
	Выполняется подсчет коллличества умений для финальной крысы                
*/
#ifndef SKILLS_H
#define SKILLS_H

#include <iostream>
#include <fstream>

using namespace std;

class Skills
{
private:
	int point;		// ввод умений для одной крысы
	int rats;		// ввод кол-ва крыс
	int result;		// кол-во очков умений
	int sumpoints;		// сумма	
	int armor;		// Нужно защита
	int sumarmor;		// Получится защиты
	int salesumpoints;	// сумма очков умений (АКЦИЯ)
	int salearmor;		// Нужно защита (АКЦИЯ)
	int salesumarmor;	// Получится защиты (АКЦИЯ)
	
	fstream fout;		// Вывод в файл
public:
	Skills();
	// Cin
	int  cininfo();
	bool inputdata();

	// в 4 умения
	void four_skills(); 		//игра в 4 умения
	void four_skills_discount(); 	//игра в 4 умения скидка на умения
	void show_four();		//показать - 4 умения
	void show_four_discount();	//показать - скидка на умения
};
#endif
