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
	//cout << "����� ������ �����\n";
	//cin >> n1;
	//cout << "����� ������ �����\n";
	//cin >> n2;
	//cout << "���:" << NOK(n1,n2) << endl;

	//double n1;
	//double n2;
	//cin >> n1;
	//cin >> n2;


	int type;
	cout << "����� ����� � ����� ����� ������� ��������:\n1.float\n2.int\n3.long\n4.double" << endl;
	cin>> type;
	switch (type)
	{
		case 1:
			float f1, f2;
			cout << "����� ������ �����\n";
			cin >> f1;
			cout << "����� ������ �����\n";
			cin >> f2;
			cout << "���:" << NOK(f1, f2) << endl;
			break;

		case 2:
			int i1, i2;
			cout << "����� ������ �����\n";
			cin >> i1;
			cout << "����� ������ �����\n";
			cin >> i2;
			cout << "���:" << NOK(i1, i2) << endl;
			break;

		case 3:
			long l1, l2;
			cout << "����� ������ �����\n";
			cin >> l1;
			cout << "����� ������ �����\n";
			cin >> l2;
			cout << "���:" << NOK(l1, l2) << endl;
			break;
		case 4:
			double d1, d2;
			cout << "����� ������ �����\n";
			cin >> d1;
			cout << "����� ������ �����\n";
			cin >> d2;
			cout << "���:" << NOK(d1, d2) << endl;
			break;

		default:
			cout << "������" << endl;
			break;
	}
} 