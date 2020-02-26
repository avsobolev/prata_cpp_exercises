/* 05_09.cpp
    Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 5, страница 256, упражнение 9

    Напишите программу, соответствующую описанию программы из упражнения 8,
    но с использованием объекта string вместо символьного массива. Включите
    заголовочный файл string и применяйте операции отношений для 
    выполнения проверки.

    УПРАЖНЕНИЕ №8
	Напишите программу, которая использует массив char и цикл для чтения по
	одному слову за раз до тех пор, пока не будет введено слово done. Затем 
	программа должна сообщить количество введенных слов (исключая done). Пример
	запуска должен быть таким:
	Вводите слова (для завершения введите слово done):
	anteater birthday category dumpste
	envy finagle geometry done for sure
	Вы ввели 7 слов 
	Вы должны включить заголовочный файл cstring и применять функцию
	strcmp () для выполнения проверки.
*/

#include <iostream>
#include <string>

int main()
{
	using namespace std;

	string word;
    string stopword="done";
	int NumWords = 0;

	cout << "Введите слово (done - конец ввода)" << endl;

	do
	{
		NumWords++;
		cout << "Слово №" << NumWords << ": ";
		cin >> word;
	} while (word != stopword);

	cout << "-----------------" << endl;
	cout << "Вы ввели " << (NumWords-1) << " слов(а)." << endl;

	return 0;
}