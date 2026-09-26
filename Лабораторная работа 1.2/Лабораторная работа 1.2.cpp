// лабораторная работа #1
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int yearEnt = 1984;
	int year1 = 1984;
	int Cikl = 1;
	string color, animal;

	if (year1 < 1984 || year1 > 2044)
	{
		cout << "Выход за пределы цикла." << endl;
	}
	else
	{
		//Вычисляем разницу между годами
		int ost = year1 - yearEnt;

		while(ost > 12)
		{
			Cikl ++;
			ost -= 12;
		}

		switch (Cikl)
		{
		case 1:
			color = "зелёного(-ой)";
			break;
		case 2:
			color = "красного(-ой)";
			break;
		case 3:
			color = "жёлтого(-ой)";
			break;
		case 4:
			color = "белого(-ой)";
			break;
		case 5:
			color = "чёрного(-ой)";
			break;
			{
		default:
			break;
			}
		}

		switch (ost)
		{
		case 0:
			animal = "крысы";
			break;
		case 1:
			animal = "коровы";
			break;
		case 2:
			animal = "тигра";
			break;
		case 3:
			animal = "зайца";
			break;
		case 4:
			animal = "дракона";
			break;
		case 5:
			animal = "змеи";
			break;
		case 6:
			animal = "лошади";
			break;
		case 7:
			animal = "овцы";
			break;
		case 8:
			animal = "обезьяны";
			break;
		case 9:
			animal = "курицы";
			break;
		case 10:
			animal = "собаки";
			break;
		case 11:
			animal = "свиньи";
			break;
			{
		default:
			break;
			}
		}
		cout << "Год " + color + " " + animal << endl;
	}
}
