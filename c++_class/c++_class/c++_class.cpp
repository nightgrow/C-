// c++_class.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>

#define SizeName 10
const int SizeAdd = 20;

using namespace std;


int main()
{
	char name[SizeName];
	char address[SizeAdd];

	cout << "이름은 ";
	cin >> name;
	cout << "주소는 ";
	cin >> address;

	cout << "이름은 " << name << "이고, " << "주소는  " << address << "입니다." << endl << endl;


	int x = 12, y = 1234;

	cout << "10진수 " << dec << x << endl;
	cout << "8진수 " << oct << x << endl;
	cout << "16진수 " << hex << x << endl << endl;

	cout << "123456780" << endl;
	cout << dec << y << endl;
	cout << setw(10) << y << endl << endl;


	float x2 = 12.30;
	float y2 = 10.0 + 2.0 / 3.0;

	cout << "x=" << x2 << endl;
	cout << "y" << y2 << endl;
	
	cout.precision(4);

	cout << "x=" << x2 << endl;
	cout << "y=" << y2 << endl << endl;


	float x3 = 12.30;
	float y3 = 10.6667;

	cout.setf(ios::showpoint);

	cout << "x=" << x << endl;
	cout << "y=" << y << endl;

	cout.precision(4);

	cout << "x=" << x << endl;
	cout << "y=" << y << endl << endl;

	int ion = 30;

	cout << "The number of ion: ";
	cout.setf(ios::showpos);
	cout << ion << endl;

	cout << "16진수 사용";
	cout << hex << endl << ion << endl;

	cout.setf(ios::uppercase);
	cout << ion << endl;
	cout.setf(ios::showbase);
	cout << ion << endl << endl;


	int ion2 = 0;

	cout << "자리 위치 지정" << endl;
	cout.setf(ios::showpos);
	cout.setf(ios::right, ios::adjustfield);
	cout.setf(ios::showpoint);

	while (ion2 < 3) {
		cout.width(8);
		cout << ++ion2 << endl;
	}

	cout << "* * *\n";
	cout.setf(ios::left, ios::adjustfield);

	while (ion2 > 0) {
		cout.width(8);
		cout << ion2-- << endl;
	}

	cout << "* * *\n";
	cout.setf(ios::internal, ios::adjustfield);

	while (ion2 < 3) {
		cout.width(8);
		cout << ++ion2 << endl;
	}

	cout << "* * *\n" << endl;


	const int Length = 30;
	char name2[Length];
	char address2[Length];

	cout << "이름은 ";
	cin.getline(name2, Length);
	cout << "주소는 ";
	cin.getline(address2, Length);

	cout << "이름은 " << name2 << "이고, 주소는 " << address2 << "입니다." << endl;
}

