/* 03_06.cpp
    Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 3, страница 130, упражнение 6

	Напишите программу, которая запрашивает количество миль, пройденных 
	автомобилем, и количество галлонов израсходованного бензина, а затем 
	сообщает значение количества миль на галлон. Или, если хотите, программа может
	запрашивать расстояние в километрах, а объем бензина в литрах, и выдавать
	результат в виде количества литров на 100 километров. 
*/

#include <iostream>

int main()
{
	using namespace std;
	const int C_l100 = 100;
	float k, l;
	float con;
	
	cout << "\nEnter kilometers: ";
	cin >> k;
	cout << "Enter liters: ";
	cin >> l;
	
	con = (l*100)/k;

	cout << "Your consuption is " << con << " liters per 100 km.";

	return 0;
}
