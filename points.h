// Помогает найти кол-во очков
#ifndef POINTS_H
#define POINTS_H

#include <iostream>
using namespace std;

class Point
{
private:
	int point;		// очки
	int rats;		// крысы
	int sum;		// хранит результат
	
	int varible;	// хранит количество итераций
public:
	Point();	// коструктор
	
	void cininfo(int&, int&);	// Ввод кол-ва очков умений и крыс

	void count();				// Подсчет 
	void show();				// Выводит инфо на экран	
};

#endif
