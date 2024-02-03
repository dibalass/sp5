#include <iostream>
#include "func.h"

//float nok, 
//n1,
//n2;
//int nok, 
//n1,
//n2;
//long nok, s
//n1, 
//n2;


using namespace std;
int main(void)
{
	setlocale(LC_ALL, "rus");

	//double nok,n1,n2;
	//cout << "Введи первое число\n";
	//cin >> n1;
	//cout << "Введи второе число\n";
	//cin >> n2;
	//cout << "НОК:" << NOK(n1,n2) << endl;

	//double n1;
	//double n2;
	//cin >> n1;
	//cin >> n2;


	int type;
	cout << "Введи цифру с каким типом данными работать:\n1.float\n2.int\n3.long\n4.double" << endl;
	cin>> type;
	switch (type)
	{
		case 1:
			float f1, f2;
			cout << "Введи первое число\n";
			cin >> f1;
			cout << "Введи второе число\n";
			cin >> f2;
			cout << "НОК:" << NOK(f1, f2) << endl;
			break;

		case 2:
			int i1, i2;
			cout << "Введи первое число\n";
			cin >> i1;
			cout << "Введи второе число\n";
			cin >> i2;
			cout << "НОК:" << NOK(i1, i2) << endl;
			break;

		case 3:
			long l1, l2;
			cout << "Введи первое число\n";
			cin >> l1;
			cout << "Введи второе число\n";
			cin >> l2;
			cout << "НОК:" << NOK(l1, l2) << endl;
			break;
		case 4:
			double d1, d2;
			cout << "Введи первое число\n";
			cin >> d1;
			cout << "Введи второе число\n";
			cin >> d2;
			cout << "НОК:" << NOK(d1, d2) << endl;
			break;

		default:
			cout << "Ошибка" << endl;
			break;
	}
} 