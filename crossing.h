#ifndef CROSSING_H
#define CROSSING_H

#include <iostream>
using namespace std;

/*--------------------------------------------------------------------*/

class Crossing
{
private:
	int sumdevil16;		// сердец для 16 дьявола
	int sumdevil18;		// сердец для 18 дьявола
	int sumdevil19;		// сердец для 19 дьявола
	int sumdevil20;		// сердец для 20 дьявола
	int sumdevilmax;	// сердец для макс.дьявола
	int sumvampire21;	// сердец для вампира 21 уровня
	int sumvampire22;	// сердец для вампира 22 уровня
	int sumvampire23;	// сердец для вампира 23 уровня	
	int sumvampire24;	// сердец для вампира 24 уровня
	int sumvampire25;	// сердец для вампира 25 уровня
	int sumvampiremax;	// сердец для макс.вампира
	int sumjoker;		// сердец для первого джокера
public:
	Crossing ();

	void inputdata();	// Вывод информации

	void silica_7();	// Силища
	void freeday_7();	// Свобоный день

	void silica_8();	// Силище + Татем
	void freeday_8();	// Свобоный день
};

#endif
