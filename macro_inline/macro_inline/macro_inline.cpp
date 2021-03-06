// macro_inline.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//macro
#define VALUES(x)	((x) * (x))

//inline
inline int VALUES2(int x) {
	return x * x;
}

void useMacro() {
	cout << "Using Macro!" << endl;
	cout << VALUES(5) << endl;

	//same
	cout << "Same!" << endl;
	cout << ((5) * (5)) << endl;
}

void useInline() {
	cout << "Using Inline!" << endl;
	cout << VALUES2(5) << endl;
} //Data Loss Occurred -> Use Template!

int main()
{
	useMacro();
	useInline();

    return 0;
}

