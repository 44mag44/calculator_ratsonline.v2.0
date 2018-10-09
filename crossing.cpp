#ifndef CROSSING_CPP
#define CROSSING_CPP

#include "crossing.h"

////////////////////////////////////////////////////////////////////////////////
/*									Конструктор								  */
////////////////////////////////////////////////////////////////////////////////
Crossing::Crossing()
{
	sumdevil16		= 0;	// сердец для 16 дьявола
	sumdevil18		= 0;	// сердец для 18 дьявола
	sumdevil19		= 0;	// сердец для 19 дьявола
	sumdevil20		= 0;	// сердец для 20 дьявола
	sumdevilmax		= 0;	// сердец для макс.дьявола
	sumvampire21	= 0;	// сердец для вампира 21 уровня
	sumvampire22	= 0;	// сердец для вампира 22 уровня
	sumvampire23	= 0;	// сердец для вампира 23 уровня
	sumvampire24	= 0;	// сердец для вампира 24 уровня
	sumvampire25	= 0;	// сердец для вампира 25 уровня
	sumvampiremax	= 0;	// сердец для макс.вампира
	sumjoker		= 0;	// сердец для первого джокера
};

////////////////////////////////////////////////////////////////////////////////
/*									Седьмые пеленки							  */ 
////////////////////////////////////////////////////////////////////////////////
void Crossing::silica_7() // Силище, скрещивание
{
	int angel11		= 60;	// 7+7+7=11 >> 28+32=60
	int angel13		= 88;	// 11+11=13
	int devil16		= 104;	// 13+13=16
	int devil18		= 288;	// 16+16=18
	int devil20		= 324;	// 18+18=20
	int devilmax20	= 324;	// 20+16=20
	int vampire22	= 360;	// 20+20=22 >> devilmax20 + devilmax20

	sumdevil16		= (angel11*4)+(angel13*2)+devil16;		//	16 дьявол
	sumdevil18		= (sumdevil16*2)+devil18;				//	18 дьявол 
	sumdevil20		= (sumdevil18*2)+devil20;				//	20 дьявол	
	sumdevilmax 	= (sumdevil20+sumdevil16)+devilmax20;	//	+20 дьявол
	sumvampire22	= (sumdevilmax*2)+vampire22;			//	22 вампир

	cout << "---------------------------------------------------------" << endl;
	cout << "\t\t- Силища. 7 пеленки -" << endl;
	cout << "Кол-во сердец >\t\t Обычный|Брач.пора" << endl;	
	cout << "Дьявол\t16 ур.  (12кр.)\t-> " << sumdevil16 
		<< "\t| " << sumdevil16/2 << endl;
	cout << "Дьявол\t18 ур.  (24кр.)\t-> " << sumdevil18 
		<< "\t| " << sumdevil18/2 << endl;
	cout << "Дьявол\t20 ур.  (48кр.)\t-> " << sumdevil20 
		<< "\t| " << sumdevil20/2 << endl;
	cout << "Дьявол\t+20 ур. (60кр.)\t-> " << sumdevilmax 
		<< "\t| " << sumdevilmax/2 << endl;
	cout << "Вампир\t22 ур. (120кр.)\t-> " << sumvampire22
		<< "\t| " << sumvampire22/2 << endl;
	
	cout << "Схема > " << endl;
	cout << " 16 ->\t7+7=9 , 9+7=11 , 11+11=13 , 13+13=16(12)" << endl;
	cout << " 18 ->\t16+16=18(24)" << endl;
	cout << " 20 ->\t18+18=20(48)" << endl;
	cout << "+20 ->\t20+16=20(60)" << endl;
	cout << " 22 ->\t20+20=22(120)" << endl;
}

void Crossing::freeday_7() // Свобоный день
{
	int royal10		= 29;	// 7+7+7=10
	int angel12		= 20;	// 12 angel 
	int angel14		= 48;	// 12+12=14
	int devil16		= 56;	// 14+14=16
	int devil19		= 144;	// 16+16=19
	int devilmax20	= 171;	// 19+19=20
	int vampire22	= 180;	// 20+20=22

	sumdevil16		= (royal10*8)+(angel12*4)+(angel14*2)+devil16;	// 16 дьявол
	sumdevil19		= (sumdevil16*2)+devil19;						// 19 дьявол
	sumdevilmax 	= (sumdevil19*2)+devilmax20;					// 20 дьявол
	sumvampire22	= (sumdevilmax*2)+vampire22;					// 22 вампир

	cout << "---------------------------------------------------------" << endl;
	cout << "\t\t- 7 пеленки -" << endl;
	cout << "Кол-во сердец >\t\t Обычный|Брач.пора" << endl;
	cout << "Дьявол\t16 ур. (24кр.)\t-> " << 2*sumdevil16 
		<< "\t| " << sumdevil16 << endl;
	cout << "Дьявол\t19 ур. (48кр.)\t-> " << 2*sumdevil19 
		<< "\t| " << sumdevil19 << endl;
	cout << "Дьявол\t20 ур. (96кр.)\t-> " << 2*sumdevilmax 
		<< "\t| " << sumdevilmax << endl;
	cout << "Вампир\t22 ур. (192кр.)\t-> " << 2*sumvampire22 
		<< "\t| " << sumvampire22 << endl;
	
	cout << "Схема > " << endl;
	cout << " 16 ->\t7+7=8 , 8+7=10 , 10+10=12 , 12+12=14(12) , \n\t";
	cout << " 14+14=16(24)" << endl; 
	cout << " 19 ->\t16+16=19(48)" << endl;
	cout << " 20 ->\t19+19=20(96)" << endl;
	cout << " 22 ->\t20+20=22(192)" << endl;
	cout << "---------------------------------------------------------" << endl;
}

////////////////////////////////////////////////////////////////////////////////
/*								 Восмые пеленки								  */ 
////////////////////////////////////////////////////////////////////////////////
void Crossing::silica_8()	// В Тотем
{
	int royal10		= 32;	// 8+8=10
	int angel13		= 40;	// 10+10=13 
	int angel15		= 104;	// 13+13=15
	int devil18		= 120;	// 15+15=18
	int totem20		= 324;	// 18+18=20
	
	int sumdevil18	= 0;	//sum 18 divel
	int totem		= 0;	//sum 20 divel
		
	sumdevil18 = (royal10*8)+(angel13*4)+(angel15*2)+devil18;	// 18 дьявлол
	totem = (sumdevil18*2) + totem20;							// 20 дьявол
	
	cout << "---------------------------------------------------------" << endl;
	cout << "\t- Силища. Тотем. 8 пеленки -" << endl;
	cout << "Кол-во сердец >\t\t Обычный|Брач.пора" << endl;
	cout << "Дьявол\t18 ур. (16кр.)\t-> " << sumdevil18	<< "\t| " 
			<< sumdevil18/2 << endl;
	cout << "Дьявол\t20 ур. (32кр.)\t-> " << totem << "\t| " << totem/2 << endl;
	
	cout << "Схема > " << endl;
	cout << " 18 ->\t8+8=10 , 10+10=13 , 13+13=15(8) , 15+15=18(16)" << endl; 
	cout << " 20 ->\t18+18=20(32)"	<< endl;
}

void Crossing::freeday_8()	// Свобоный день
{
	int angel12		= 104;	// 10+10=12
	int angel14		= 96;	// 12+12=14
	int devil16		= 112;	// 14+14=16
	int devil18		= 288;	// 16+16=18
	int devil20		= 324;	// 18+18=20

	int vampire21		= 324;	// 20+16=21
	int vampire22		= 360;	// 20+20=22
	int vampire23		= 672;	// 21+21=23
	int vampire24		= 704;	// 22+22=24
	int maxvampire25	= 752;	// 24+23=25

	int joker28			= 800;	// 25+25=28 	
	
	sumdevil16		= (angel12*4)+(angel14*2)+devil16;			// 16 дьявол
	sumdevil18		= (sumdevil16*2)+devil18;					// 18 дьявол
	sumdevilmax	  	= (sumdevil18*2)+devil20;					// 20 дьявол
	sumvampire22	= (sumdevilmax*2)+vampire22;				// 22 вампир
	sumvampire24	= (sumvampire22*2)+vampire24;				// 24 вампир
	sumvampire21  	= (sumdevilmax+sumdevil16)+vampire21;		// 21 вампир
	sumvampire23  	= (sumvampire21*2)+vampire23;				// 23 вампир	
	sumvampiremax	= (sumvampire23+sumvampire24)+maxvampire25;	//+25 вампир
	sumjoker		= (sumvampiremax*2)+joker28;				// 28 джокер 


	cout << "---------------------------------------------------------" << endl;
	cout << "\t\t- 8 пеленки -" << endl;
	cout << "Кол-во сердец >\t\t  Обычный|Брач.пора" << endl;
	cout << "Дьявол\t16 ур. (16кр.)\t-> " << sumdevil16	<< "\t | " 
			<< sumdevil16/2 << endl;
	cout << "Дьявол\t18 ур. (32кр.)\t-> " << sumdevil18	<< "\t | " 
			<< sumdevil18/2 << endl;
	cout << "Дьявол\t20 ур. (64кр.)\t-> " << sumdevilmax << "\t | " 
			<< sumdevilmax/2 << endl;
	cout << "Вампир\t22 ур. (128кр.)\t-> " << sumvampire22 << "\t | "
			<< sumvampire22/2 << endl;
	cout << "Вампир\t24 ур. (256кр.)\t-> " << sumvampire24 << " | "
			<< sumvampire24/2 << endl;
	cout << "Вампир\t21 ур. (80кр.)\t-> " << sumvampire21 << "\t | "
			<< sumvampire21/2 << endl;
	cout << "Вампир\t23 ур. (160кр.)\t-> " << sumvampire23 << " | "
			<< sumvampire23/2 << endl;
	cout << "Вампир\t25 ур. (416кр.)\t-> " << sumvampiremax << " | "
			<< sumvampiremax/2 << endl;
	cout << "Джокер\t28 ур. (832кр.)\t-> " << sumjoker << " | "
			<< sumjoker/2 << endl;
	
	cout << "Схема > " << endl;
	cout << " 14 ->\t8+8=10(2) , 10+10=12(4) , 12+12=14(8)\n";
	cout << " 16 ->\t14+14=16(16)\t->8x коромежек осталось\n";
	cout << " 18 ->\t16+16=18 (32)\t->6x\n";
	cout << " 20 ->\t18+18=20 (64)\t->41x\n";
	cout << " 22 ->\t20+20=22 (128)\t->114x\n";
	cout << " 24 ->\t22+22=24 (256)\t->218x\n";
	cout << " 21 ->\t20+16=21 (80)\t->109x\n";
	cout << " 23 ->\t21+21=23 (160)\t->262x\n";
	cout << " 25 ->\t24+23=25 (416)\t->2x\n";
	cout << " 28 ->\t25+25=28 (832)\t->337x\n";
	cout << "---------------------------------------------------------" << endl;

}
////////////////////////////////////////////////////////////////////////////////
/*-----------------------------Вывод всей информации--------------------------*/
////////////////////////////////////////////////////////////////////////////////
void Crossing::inputdata()
{
	char ask; // Показать таблицу скрещивания?
	cout << "---------------------------------------------------------" << endl;
	cout << "Показать схемы скрещиваний? (y|n): ";
	cin >> ask;

	if(ask == 'y' || ask == 'Y')
	{
		while (true) 
		{
			char cross = ' '; // какой ур пеленок нужен?
			cout << "Уровень пеленок для просмотра: ";
			cin >> cross;				
			if(cross == '7')
			{	
				// варианты скрещиваний для СЕДЬМЫХ пеленок
				silica_7();	// силища 
				freeday_7();	// свободный
				break;
			}
			else
			if(cross == '8')
			{	
				// варианты скрещиваний для ВОСЬМЫХ пеленок	
				silica_8();	// силища
				freeday_8();	// свободный
				break;
			}
			else
			{
				cout << "-------------------------------";
				cout <<	"--------------------------" << endl;
				cout << "\tЕсть схемы только для 7 и 8 пеленок!" << endl;
	
				break;
			}
		}
	}
	else
	if(ask == 'n' || ask == 'N')
	{	
		cout << "-------------------------------";
		cout <<	"--------------------------" << endl;
		cout << "\tпрограмма завершена.\n";
	}
	else
	{
		cout << "-------------------------------";
		cout <<	"--------------------------" << endl;
		cout << "\n...что-то пошло не так" << endl;
	}

}

#endif
