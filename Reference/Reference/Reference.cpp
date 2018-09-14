// Reference.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>

using namespace std;

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

	return 0;
}

