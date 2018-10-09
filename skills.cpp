#ifndef SKILLS_CPP
#define SKILLS_CPP

#include "skills.h"

////////////////////////////////////////////////////////////////////////////////
/*									Конструктор								  */
////////////////////////////////////////////////////////////////////////////////
Skills::Skills()
{
	point			= 0;	// ввод умений для одной крысы
	rats			= 0;	// ввод кол-ва крыс
	result			= 0;	// кол-во очков умений
	sumpoints		= 0;	// сумма очков умений	
	armor			= 0;	// Нужно защита
	skills			= 0;	// Нужно воровство/атака			
	sumarmor		= 0;	// Получится защиты
	sumskills		= 0;	// Получится воровство/атакая
	salesumpoints	= 0;	// сумма очков умений (АКЦИЯ)
	salearmor		= 0;	// Нужно защита (АКЦИЯ)
	salesumarmor	= 0;	// Получится защиты (АКЦИЯ)
	saleskills		= 0;	// Нужно воровство/атака (АКЦИЯ)			
	salesumskills	= 0;	// Получится воровство/атакая (АКЦИЯ)

	fout.open("save_Skills_Rats", ios_base::out|ios_base::in|ios_base::trunc);
}
////////////////////////////////////////////////////////////////////////////////
/*									Ввод данных								  */
////////////////////////////////////////////////////////////////////////////////
int Skills::cininfo()
{
	cout << "Очки\t:"; 
	if(!(cin >> point) || point < 0)	// очки
	{
		cout << "\n\n\t\t";		
		cout << "Ввод букв, знаков препинания, меньше нуля недопустим!";
		cout << "\n\n";
	}

	

	cout << "Крысы\t:";
	if(!(cin >> rats) || rats < 0)		// крысы
	{
		cout << "\n\n\t\t";		
		cout << "Ввод букв, знаков препинания, меньше нуля недопустим!";
		cout << "\n\n";
	}

	fout << "Очки\t-> " << point << endl;	// Запись в файл очков Умений
	fout << "Крысы\t-> " << rats << endl;	// Запись в файл Кол-во Крыс 


	return 44;
}

////////////////////////////////////////////////////////////////////////////////
/*								 УНИВЕРСАЛЬНАЯ								  */ 
////////////////////////////////////////////////////////////////////////////////
void Skills::four_skills()
{
	result = 0; // очищаем от предыдущих значений	

	for(int i=0; i<=point; i++)	// цикл суммирования 1+2+3+4+5...
		result+=i;				// Потрачено навыка за 1-ну прокачку	
	
	sumpoints	= result*rats;		// сумма очков
	armor		= sumpoints/4;		// нужно для 1-го навыка
	sumarmor	= (rats*point)/4;	// получится для 1-го навыка
}
void Skills::show_four() // SHOW
{
	four_skills();
	// Вывод в терминал
	cout << "---------------------------------------------------------" << endl;
	cout << "Универсальная крыса ->" << endl;
	cout << "\t\tКража\t" << "Добыча\t" << "Защита\t" << "Атака\t" << endl;
	cout << "Нужно >\t\t" << armor << "\t" << armor << "\t" << armor 
		<< "\t" << armor << endl; 
	cout << "Итого >\t\t" << sumarmor << "\t" << sumarmor << "\t" 
		<< sumarmor << "\t" << sumarmor << endl; 

	// Запись в файл
	fout << "---------------------------------------------------------" << endl;
	fout << "\t\tУниверсальная крыса: ";
	fout << "Кражи " << "Добычи " << "Защиты " << "Атаки" << endl;
	fout << "Нужно по > \t" << armor << endl; 
	fout << "Итого по > \t" << sumarmor << endl;
}

					// В АКЦИЮ "Крысы на прокачку" //
void Skills::four_skills_discount() 
{
	result = 0; // очищаем от предыдущих значений
	
	for(int i=0; i<=point; i++) // Потрачено навыка за 1-ну прокачку
	{
		int sum = 1;
		sum+=i;
		result+=sum/2;
	}

	salesumpoints	= result*rats;			// сумма очков
	salearmor		= salesumpoints/4;		// нужно для 1-го навыка
	salesumarmor	= (rats*point)/4;		// получится для 1-го навыка
}
void Skills::show_four_discount() // SHOW
{
	four_skills_discount();
	// Вывод в терминал
	cout << "Крысы на прокачку" << endl;
	cout << "\t\t" << salearmor << "\t" << salearmor << "\t" << salearmor << "\t" 
		<< salearmor << endl; 
	cout << "\t\t" << salesumarmor << "\t" << salesumarmor << "\t" 
		<< salesumarmor << "\t" << salesumarmor << endl; 
		
	// Запись в файл
	fout << "*Крысы на прокачку*" << endl;
	fout << "Нужно по > \t" << salearmor << endl; 
	fout << "Итого по > \t" << salesumarmor << endl;
}

////////////////////////////////////////////////////////////////////////////////
/*								 	АЛЬТЕРНАТИВНЫЙ							  */ 
////////////////////////////////////////////////////////////////////////////////
void Skills::alternative()
{
	result = 0; // очищаем от предыдущих значений	

	for(int i=0; i<=point; i++)	// цикл суммирования 1+2+3+4+5...
		result+=i;				// Потрачено навыка за 1-ну прокачку	
	
	sumpoints	= result*rats;			// сумма очков
	armor		= sumpoints/4;			// нужно для 1-го навыка
	skills		= (sumpoints/4)*3;		// нужно для 4-х навыков
	sumarmor	= (rats*point)/4;		// получится для 1-го навыка
	sumskills	= ((rats*point)/4)*3;	// получится для 4-х навыков
}
void Skills::show_alternative() // SHOW
{
	alternative();
	
	// Вывод в терминал
	cout << "---------------------------------------------------------" << endl;
	cout << "Альтернативный вариант ->" << endl;
	cout << "\t\tЗащита\t" << "Атака" << endl;
	cout << "Нужно >\t\t" << armor << "\t" << skills << endl; 
	cout << "Итого >\t\t" << sumarmor << "\t" << sumskills << endl; 
	
	// Запись в файл
	fout << "---------------------------------------------------------" << endl;
	fout << "\t\tАльтернативный вариант" << endl;
	fout << "\t\tЗащита\t" << "Атака" << endl;
	fout << "Нужно > " << armor << " \t" << skills << endl; 
	fout << "Итого > " << sumarmor << " \t" << sumskills << endl; 
}
					// В АКЦИЮ "Крысы на прокачку" //
void Skills::alternative_discount() 
{
	result = 0; // очищаем от предыдущих значений

	for(int i=0; i<=point; i++) // Потрачено навыка за 1-ну прокачку
	{
		int sum = 1;
		sum+=i;
		result+=sum/2;
	}
	
	salesumpoints	= result*rats;			// сумма очков
	salearmor		= salesumpoints/4;		// нужно для 1-го навыка
	saleskills		= (salesumpoints/4)*3;	// нужно для 4-х навыков
	salesumarmor	= (rats*point)/4;		// получится для 1-го навыка
	salesumskills	= ((rats*point)/4)*3;	// получится для 4-х навыков
}
void Skills::show_alternative_discount() // SHOW
{
	alternative_discount();
	// Вывод в терминал
	cout << "Крысы на прокачку " << endl;
	cout << "\t\t" << salearmor << "\t" << saleskills << endl; 
	cout << "\t\t" << salesumarmor << "\t" << salesumskills << endl; 

	// Запись в файл		
	fout << "*Крысы на прокачку*" << endl;
	fout << "\t\tЗащита\t" << "Атака" << endl;
	fout << "Нужно > " << salearmor << " \t" << saleskills << endl; 
	fout << "Итого > " << salesumarmor << " \t" << salesumskills << endl;  	
}
////////////////////////////////////////////////////////////////////////////////
/*-----------------------------Вывод всей информации--------------------------*/
////////////////////////////////////////////////////////////////////////////////
bool Skills::inputdata()
{
	//cout << "\n\t***Калькулятор для игры \"Крысы Онлайн\"***" << endl;
		
	if(fout.is_open())
	{
		cininfo();
	
		show_four();
		show_four_discount();
	
		show_alternative();
		show_alternative_discount();
		
		fout << "\n\tПрограмма завершена" << endl;
		fout.close();
	}

	return false;
}
#endif 
