// memory.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "stdlib.h"
using namespace std;
int value;
int main()
{
	float pi = 3.14f;
	char *str = new char[100];
	cout << &value <<"\n";
	cout << &pi << "\n";
	cout << (int)str << "\n";
	cout << &str << "\n";
	return 0;
}
