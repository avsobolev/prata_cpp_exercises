/* 05_10.cpp
    Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 5, страница 256, упражнение 10

    Напишите программу, использующую вложенные циклы, которая запрашивает
    у пользователя значение количества строк для отображения. Затем она должна
    отобразить указанное число строк со звездочками, с одной звездочкой в первой
    строке, двумя — во второй и т.д: В каждой строке звездочкам должны 
    предшествовать точки — в таком количестве, чтобы общее число символов в каждой
    строке было равно количеству строк. Пример запуска программы должен 
    выглядеть следующим образом:
    Введите количество строк: 5
    ....*
    ...**
    ..***
    .****
    *****
*/

#include <iostream>
#include <string>

int main()
{
	using namespace std;

    int numstr;
    cout << "\nEnter number of strings: ";
    cin >> numstr;

    for (int i = 1; i <= numstr; i++)
    {
        for (int j = 1; j <= numstr-i; j++)
        {
            cout << ".";
        };

        for (int j = 1; j<=i; j++)
        {
            cout << "*";
        };
        
        cout << endl;   
    }
	return 0;
}