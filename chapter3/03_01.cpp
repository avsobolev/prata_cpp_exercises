/* 03_01.cpp
    Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 3, страница 129, упражнение 1

	Напишите короткую программу, которая запрашивает рост в дюймах и 
	преобразует их в футы и дюймы. Программа должна использовать символ 
	подчеркивания для обозначения позиции, где будет производиться ввод. Для 
	представления коэффициента преобразования используйте символьную константу const.
*/

#include <iostream>

int main()
{
	using namespace std;
	
	const int Coeff=12;
	int h_inch, h_ft, h_rem;
	
	cout << "\nEnter your hight in inch: _____\b\b\b\b\b";
	cin >> h_inch;
	h_ft = h_inch / Coeff;
	h_rem = h_inch % Coeff;
	cout << "Your hight is: " << h_ft << "ft. and " << h_rem << " inch." ;
	cout << endl;

	return 0;
}
