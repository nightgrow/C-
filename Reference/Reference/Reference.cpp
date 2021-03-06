// Reference.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>

#define size_d 100

using namespace std;

extern int x, y;
const int size_c = 200;

//정적변수 선언
void no_ret() {
	int x = 0;
	static int y = 0;

	x++;
	y++;

	cout << "x값: " << x << "y값: " << y << endl;
}

int main()
{
	// Reference
	int data = 100;
	int &rdata = data;
	int data2[2][2] = {
		{1, 2},
		{3, 4}
	};

	cout << data << ", " << rdata << endl;
	rdata = 200;
	cout << data << ", " << rdata << endl;
	cout << &data << ", " << &rdata << endl << endl;

	// Array & for
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << "Data[" << i << "][" << j << "]: " << data2[i][j] << endl;
		}
	}

	cout << endl;


	// A Whole Number
	cout << "10진 정수형 상수 = " << 80 << endl;
	cout << "10진수로 표현한 8진 정수형 상수(0120) = " << 0120 << endl;
	cout << "10진수로 표현한 16진 정수형 상수(0x50) = " << 0x50 << endl;

	cout << endl;

	// 우선순위에 의한 자료형 변환
	char munja = 'a';
	int gap = 34;
	float silsu = 212.34, hap;
	hap = munja + gap + silsu;
	cout << "hap의 값: " << hap << endl;

	cout << endl;

	// 강제 자료형 변환(소숫점 아래는 버림)
	float gap1 = 2.11, gap2 = 13.5;

	cout << "gap1 + gap2 = " << gap1 + gap2 << endl;
	cout << "gap2/ gap1 = " << (int)gap2 /  (int)gap1 << endl;

	cout << endl;

	// 정적변수 선언
	for (int i = 0; i < 3; i++) {
		no_ret();
	}

	cout << endl;

	// 외부변수
	int a = 10, b = 5;

	cout << "x * y = " << x * y << endl;
	cout << "a / b = " << a / b << endl;

	cout << endl;

	// 레지스터 변수
	register int i;

	for (i = 4; i > 0; i--) {
		register int j = 10;
		j *= i;
		cout << j << "\t";
	}

	cout << i << endl<<endl;
	

	// #define&const
	int x = 2, yd;

	yd = x * size_d;
	cout << "yd = " << yd << endl;

	int yc;

	yc = x * size_c;
	cout << "yc = " << yc << endl << endl;

	// enum
	unsigned short int Day;
	enum Week {Mon, Tue, Wed, Thu, Fri, Sat, Sun};
	Week Weekend;

	cout << "Week: Mon_0, Tue_1, Wed_2, Thu_3, Fri_4, Sat_5, Sun_6" << endl;
	cout << "Weekend: Sat_5, Sun_6" << endl;
	cout << "주말은: ";
	cin >> Day;

	Weekend = (Week)Day;

	if (Weekend == Sat || Weekend == Sun) {
		cout << "주말입니다." << endl << endl;
	}
	else {
		cout << "주말이 아닙니다." << endl << endl;
	}

	// typedef
	typedef int sss;
	sss i2;
	i2 = 3;
	cout << i2 << endl;

	return 0;
}

