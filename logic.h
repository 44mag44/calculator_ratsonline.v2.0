#ifndef LOGIC_H
#define LOGIC_H

#include "points.h"
#include "crossing.h"
#include "skills.h"

void play ()
{
	/*--------Поиск значения для прокачки навыков крыс----------*/
	Point point;
	point.show();
	/*-------------Расчет умений для навыков крыс----------*/
	Skills calc;
	calc.inputdata();	
	/*------------------Схема среseщивания---------*/
	Crossing cross;
	cross.inputdata();

}

#endif
