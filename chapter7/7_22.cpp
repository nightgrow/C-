#include <iostream>

using namespace std;

void change(int, int&);

int main () {
	int a, b;
	a = 1, b = 10;
	
	change(a, b);
	
	cout << a << endl << b << endl;
	
	return 0;
}



void change(int x, int& y) {
	int temp;
	
	temp = x;
	x = y;
	y = temp;
}
