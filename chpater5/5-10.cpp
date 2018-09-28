#include <iostream>

using namespace std;

int main() {
	int x, y, z, w;
	
	x = 14;
	y = 2;
	
	z = x << 2;
	w = y >> 2;
	
	cout << "x << 2 연산결과 = " << z << endl; 
	cout << "y << 2 연산결과 = " << w << endl;
	
	return 0;
}
