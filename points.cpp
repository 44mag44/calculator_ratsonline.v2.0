#ifndef POINTS_CPP
#define POINTS_CPP

#include "points.h"
////////////////////////////////////////////////////////////////////////////////
Point::Point()
{
	point	= 0;
	rats	= 0;
	sum	= 0;
}
/*----------------------------------ВВОД--------------------------------------*/
void Point::cininfo(int& point, int& rats)	// Ввод кол-ва очков и крыс
{
	cout << "Введите сумму умений/кол-во одного умения: ";
	cin >>	point;
	cout << "Введите кол-во крыс, которое хотите скрестить: ";
	cin >>	rats;
}
/*----------------------------------ПОДСЧЕТ-----------------------------------*/
void Point::count() // Подсчет
{
	cininfo(point, rats);
	
	sum = point/rats;	// Делим очки на кол-во крыс
	if(sum >= 1 && sum <= 2)	// 1
		cout << "Можете вкладывать по 1" << endl;
	if(sum >= 3 && sum <= 5)	// 2
		cout << "Можете вкладывать по 2" << endl;
	if(sum >= 6 && sum <= 9)	// 3
		cout << "Можете вкладывать по 3" << endl;
	if(sum >= 10 && sum <= 14)	// 4
		cout << "Можете вкладывать по 4" << endl;
	if(sum >= 15 && sum <= 20)	// 5
		cout << "Можете вкладывать по 5" << endl;
	if(sum >= 21 && sum <= 27)	// 6
		cout << "Можете вкладывать по 6" << endl;
	if(sum >= 28 && sum <= 35)	// 7
		cout << "Можете вкладывать по 7" << endl;
	if(sum >= 36 && sum <= 44)	// 8
		cout << "Можете вкладывать по 8" << endl;
	if(sum >= 45 && sum <= 54)	// 9
		cout << "Можете вкладывать по 9" << endl;
	if(sum >= 55 && sum <= 65)	// 10
		cout << "Можете вкладывать по 10" << endl;
	if(sum >= 66 && sum<= 77)	// 11
		cout << "Можете вкладывать по 11" << endl;
	if(sum >= 78 && sum <= 90)	// 12
		cout << "Можете вкладывать по 12" << endl;
	if(sum >= 91 && sum <= 104)	// 13
		cout << "Можете вкладывать по 13" << endl;
	if(sum >= 105 && sum <= 119)	// 14
		cout << "Можете вкладывать по 14" << endl;
	if(sum >= 120 && sum <= 135)	// 15
		cout << "Можете вкладывать по 15" << endl;
	if(sum >= 136 && sum <= 152)	// 16
		cout << "Можете вкладывать по 16" << endl;
	if(sum >= 153 && sum <= 170)	// 17
		cout << "Можете вкладывать по 17" << endl;	
	if(sum >= 171 && sum <= 189)	// 18
		cout << "Можете вкладывать по 18" << endl;
	if(sum >= 190 && sum <= 209)	// 19
		cout << "Можете вкладывать по 19" << endl;
	if(sum >= 210 && sum <= 230)	// 20
		cout << "Можете вкладывать по 20" << endl;
	if(sum >= 231 && sum <= 252)	// 21
		cout << "Можете вкладывать по 21" << endl;
	if(sum >= 253 && sum <= 275)	// 22
		cout << "Можете вкладывать по 22" << endl;
	if(sum >= 276 && sum <= 299)	// 23
		cout << "Можете вкладывать по 23" << endl;
	if(sum >= 300 && sum <= 324)	// 24
		cout << "Можете вкладывать по 24" << endl;
	if(sum >= 325 && sum <= 350)	// 25
		cout << "Можете вкладывать по 25" << endl;
	if(sum >= 351 && sum <= 377)	// 26
		cout << "Можете вкладывать по 26" << endl;
	if(sum >= 378 && sum <= 405)	// 27
		cout << "Можете вкладывать по 27" << endl;
	if(sum >= 406 && sum <= 434)	// 28
		cout << "Можете вкладывать по 28" << endl;
	if(sum >= 435 && sum <= 464)	// 29
		cout << "Можете вкладывать по 29" << endl;
	if(sum >= 465 && sum <= 495)	// 30
		cout << "Можете вкладывать по 30" << endl;
	if(sum >= 496 && sum <= 527)	// 31
		cout << "Можете вкладывать по 31" << endl;
	if(sum >= 528 && sum <= 560)	// 32
		cout << "Можете вкладывать по 32" << endl;
	if(sum >= 560 && sum <= 594)	// 33
		cout << "Можете вкладывать по 33" << endl;
	if(sum >= 595 && sum <= 629)	// 34
		cout << "Можете вкладывать по 34" << endl;
	if(sum >= 630 && sum <= 665)	// 35
		cout << "Можете вкладывать по 35" << endl;
	if(sum >= 666 && sum >= 9999999)
		cout << "Такого числа непредусмотрено!" << endl;
}
/*----------------------------------ВЫВОД-------------------------------------*/
void Point::show()
{
	cout << "\n\t***Калькулятор для игры \"Крысы Онлайн\"***" << endl;
	count();
	cout << "---------------------------------------------------------" << endl;
}

#endif
