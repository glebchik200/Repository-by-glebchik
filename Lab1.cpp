// Lab1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>	// Подключаем iostream для ввода вывода 
using namespace std; // Используем пространство имен std


int main()
{
	// Задание 1.
	cout << "First string" << endl;	// 1.    Выведим строку “First string” в консоль
	setlocale(LC_ALL, "Russian");	// 3.    Исправляем проблему с кодировкой 
	cout << "Первая строка\n" << "Вторая строка" << endl;	//	2.    Выведим сразу две строки «Первая строка» и «Вторая строка» в консоль, используя \n
	cout << "Спецсимволы " << "\"\\\"" << endl << endl;	// 4.	Выводим строку «Спецсимволы “\”.


	// Задание 2.
	int i = 150;
	float x = 15.933;
	char z = 250;
	cout << "i = " << i << endl;
	cout << "x = " << x << endl;
	cout << "z = " << z << endl;


	int day = 12;
	string month = "Марта";
	int year = 2006;
	cout << "Моя дата рождения: " << day << " " << month << " " << year << " года" << endl;

	const float A = 2.3;
	const string B = "WINDOWS";
	cout << A << " " << B;
}




